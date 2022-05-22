#ifndef _EVALUTE_HPP
#define _EVALUTE_HPP

#include <vector>
#include "str.hpp"

class Evaluate : public Str
{
public:
    static void help();
    static void moreHelp();
    Evaluate(std::string, int);
private:
    void conversion();
    int base;
};


#endif // _EVALUTE_HPP