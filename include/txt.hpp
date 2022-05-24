#ifndef _TXT_HPP
#define _TXT_HPP

#include <vector>

#include "command.hpp"
#include "myinputfile.hpp"

class Txt : private Command
{
public:
    static void help();
    static void moreHelp();
protected:
    Txt(std::string);
    MyInputFile file;
    
};

#endif // _TXT_HPP