#ifndef _FIND_HPP
#define _FIND_HPP

#include "str.hpp"

class Find : public Str
{
public:
    static void help();
    static void moreHelp();
    Find(std::string, std::string);
private:
    void conversion();
    std::string match;
};


#endif // _FIND_HPP