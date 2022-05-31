#ifndef _WRAP_HPP
#define _WRAP_HPP

#include "txt.hpp"

class Wrap : public Txt
{
private:
    int width;
    void convertion();
    void convertion_f();
    bool f_flag;
public:
    static void help();
    static void moreHelp();
    Wrap(std::string, int, bool);
};

#endif // _WRAP_HPP