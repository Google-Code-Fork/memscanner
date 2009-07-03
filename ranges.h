#ifndef RANGES_H
#define RANGES_H

#include <sstream>
#include <iomanip>
#include <fstream>
#include <vector>

namespace Ranges{
    struct Range;
    unsigned long HexToDec(std::string);
    bool getRanges(int, std::vector<Ranges::Range>&, bool, bool, bool);
}


struct Ranges::Range{
    unsigned long start;
    unsigned long stop;
    Range(unsigned long=0, unsigned long=0);
};

#endif // RANGES_H
