#include <iostream>
#include "ranges.h"

Ranges::Range::Range(unsigned long START, unsigned long STOP) :
        start(START), stop(STOP)
{}

unsigned long Ranges::HexToDec(std::string s){
    unsigned long v;
    std::istringstream iss(s);
    iss >> std::setbase(0) >> v;
    return v;
}

bool Ranges::getRanges(int pid, std::vector<Ranges::Range> &ranges, bool exec, bool heap, bool stack){
    std::stringstream file;
    file<<"/proc/"<<pid<<"/maps";
    std::ifstream stream(file.str().c_str());
    if(!stream.is_open())
        return false;

    std::string line;
    while(getline(stream, line)){
        if(line.empty())
            continue;
        if(!heap&&line.find("[heap]")!=std::string::npos)
            continue;

        if(!stack&&line.find("[stack]")!=std::string::npos)
            continue;

        if(line.find("/dev/")!=std::string::npos)
            continue;
        if(line.find("/share/")!=std::string::npos)
            continue;
        if(line.find("/lib/")!=std::string::npos)
            continue;


        if(!exec&&line.find(" r-")!=std::string::npos)
            continue;

        if(line.find(" r")==std::string::npos)
            continue;

        std::string hex="0x";
        unsigned long start=HexToDec(hex+line.substr(0, 8));
        unsigned long stop=HexToDec(hex+line.substr(9, 8));
        ranges.push_back(Ranges::Range(start, stop));

    }

    return true;
}
