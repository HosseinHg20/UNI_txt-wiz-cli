#ifndef _CAPITALIZE_HPP
#define _CAPITALIZE_HPP

#include "str.hpp"

class Capitalize : public Str
{
public:
    static void help();
    static void moreHelp();
    Capitalize(std::string);
private:
    void convertion();
};

#endif // _CAPITALIZE_HPP