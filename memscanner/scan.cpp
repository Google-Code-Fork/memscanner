#include "scan.h"

void intScan::run(){
    int progress=0;
    Stopped=false;
    if(ptrace(PTRACE_ATTACH, proc.pid, 0, 0)<0){
        emit ptraceFailed(errno);
        return;
    }
    ::wait(0);

    for(unsigned j=0;j<ranges.size();j++){
        for(unsigned int i=ranges[j].start;i<=ranges[j].stop;i++){
            if(Stopped)
                goto end;
            if(progress++%pbSpace==0)
                emit setPb(progress/pbSpace);

            int result=0;
            switch(size){
                case SHORT:
                    result=static_cast<short>(ptrace(PTRACE_PEEKDATA, proc.pid, i, 0));
                    break;
                case BYTE:
                    result=static_cast<char>(ptrace(PTRACE_PEEKDATA, proc.pid, i, 0));
                    break;
                default:
                    result=static_cast<int>(ptrace(PTRACE_PEEKDATA, proc.pid, i, 0));
                    break;
            }

            if((action==BIGGER&&result>value) ||
               (action==LESS&&result<value) ||
               (action==EXACT&&result==value))
            {
                Result *result=new intResult(i, proc, value);
                emit found(result);
            }

            usleep(0);
        }
    }

    end:
    ptrace(PTRACE_DETACH, proc.pid, 0, 0);
}

void strScan::run(){
    int progress=0;
    Stopped=false;
    if(ptrace(PTRACE_ATTACH, proc.pid, 0, 0)<0){
        emit ptraceFailed(errno);
        return;
    }
    ::wait(0);

    for(unsigned j=0;j<ranges.size();j++){
        for(unsigned int i=ranges[j].start;i<=ranges[j].stop;i++){
            if(Stopped)
                goto end;
            if(progress++%pbSpace==0)
                emit setPb(progress/pbSpace);

            unsigned x=0;
            while(value[x]==static_cast<char>(ptrace(PTRACE_PEEKDATA, proc.pid, i+x, 0))){
                x++;
                if(x==value.size()){
                    Result *result=new strResult(i, proc, value);
                    emit found(result);
                    break;
                }
                usleep(0);
            }
            usleep(0);
        }
    }

    end:
    ptrace(PTRACE_DETACH, proc.pid, 0, 0);
    return;
}

Scan::Scan(pList::Proc PROC, std::vector<Ranges::Range> RANGES, int PBSPACE) :
        proc(PROC), ranges(RANGES), pbSpace(PBSPACE)
{}

intScan::intScan(pList::Proc PROC, std::vector<Ranges::Range> RANGES, int PBSPACE,
                 int VALUE, Size SIZE, Action ACTION) :
        Scan(PROC, RANGES, PBSPACE), value(VALUE), size(SIZE), action(ACTION)
{}

strScan::strScan(pList::Proc PROC, std::vector<Ranges::Range> RANGES, int PBSPACE,
                 std::string VALUE) :
        Scan(PROC, RANGES, PBSPACE), value(VALUE)
{}

void Scan::quit(){
    Stopped=true;
}

Result::Result(unsigned ADDR, pList::Proc PROC) :
        addr(ADDR), proc(PROC)
{}

intResult::intResult(unsigned ADDR, pList::Proc PROC,  int VALUE) :
        Result(ADDR, PROC), value(VALUE)
{}

std::string intResult::rep() const{
    std::stringstream ss;
    ss<<value;
    return ss.str();
}

std::string strResult::rep() const{
    return value;
}

strResult::strResult(unsigned ADDR, pList::Proc PROC, std::string VALUE) :
        Result(ADDR, PROC), value(VALUE)
{}

bool intResult::isInt() const{
    return true;
}

bool strResult::isInt() const{
    return false;
}
