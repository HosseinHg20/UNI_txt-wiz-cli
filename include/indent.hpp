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
    Indent(std::string, std::string);
    Indent(std::string, std::string, int);
    ~Indent();
};




#endif // _INDENT_HPP