#ifndef _INDENT_HPP
#define _INDENT_HPP

#include "txt.hpp"

class Indent : public Txt
{
private:
    std::string ind;
    bool n;
    int number;
public:
    static void help();
    static void moreHelp();
    Indent(std::string, std::string);
    Indent(std::string, std::string, int);
};

#endif // _INDENT_HPP