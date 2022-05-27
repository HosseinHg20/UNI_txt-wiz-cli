#ifndef _DIFF_HPP
#define _DIFF_HPP

#include "txt.hpp"

class Diff : public Txt
{
private:
    MyInputFile secondFile;
public:
    static void help();
    static void moreHelp();
    void convertion();
    Diff(std::string, std::string);
};




#endif // _DIFF_HPP