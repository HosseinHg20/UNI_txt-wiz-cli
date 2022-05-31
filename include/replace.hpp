#ifndef _REPLACE_HPP
#define _REPLACE_HPP

#include "str.hpp"

class Replace : public Str
{
public:
    static void help();
    static void moreHelp();
    Replace(std::string, std::string, std::string);
private:
    void convertion();
    std::string before;
    std::string after;
};

#endif // _REPLACE_HPP