#ifndef _STR_HPP
#define _STR_HPP

#include <vector>

#include "command.hpp"

class Str : public Command
{
public:
    static void help();
    static void moreHelp();
protected:
    static std::vector<std::string> commands;
    std::string result;
    Str(std::string);
    void print();
};

#endif // _STR_HPP