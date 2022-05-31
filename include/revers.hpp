#ifndef _REVERSE_HPP
#define _REVERSE_HPP

#include "str.hpp"

class Reverse : public Str
{
public:
    static void help();
    static void moreHelp();
    Reverse(std::string);
private:
    void convertion();
};

#endif // _REVERSE_HPP