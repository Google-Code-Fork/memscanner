#include <iostream>
#include <boost/regex.hpp>

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
        boost::match_results<std::string::const_iterator> results;
        static const boost::regex exp("([0-9a-f]+)-([0-9a-f]+) +(.{4}) +([0-9a-f]+) +(..:..) +([0-9]+) +(.*)");
        if(!boost::regex_match(line, results, exp))
            continue;

        std::vector<std::string> columns;
        for(unsigned i=1;i<results.size();i++)
            columns.push_back(results[i]);

        if(!heap&&columns[6]=="[heap]")
            continue;

        if(!stack&&columns[6]=="[stack]")
            continue;

        if(columns[6].find("/dev/")!=std::string::npos)
            continue;
        if(columns[6].find("/share/")!=std::string::npos)
            continue;
        if(columns[6].find("/lib/")!=std::string::npos)
            continue;


        if(!exec&&columns[2][1]=='-')
            continue;

        if(columns[2][0]=='-')
            continue;

        std::string hex="0x";
        unsigned long start=HexToDec(hex+columns[0]);
        unsigned long stop=HexToDec(hex+columns[1]);
        ranges.push_back(Ranges::Range(start, stop));
    }

    return true;
}
