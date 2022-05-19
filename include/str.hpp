#ifndef _STR_HPP
#define _STR_HPP

#include "command.hpp"

class Str : public Command
{
protected:
    std::string result;
    Str(std::string);
    void print();
};

#endif // _STR_HPP