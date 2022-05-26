#ifndef _APP_HPP
#define _APP_HPP

#include <iostream>
#include <vector>

#include "capitalize.hpp"
#include "revers.hpp"
#include "replace.hpp"
#include "split.hpp"
#include "evaluate.hpp"
#include "find.hpp"
#include "txt.hpp"
#include "indent.hpp"
#include "txtwrap.hpp"

class App
{
private:
    static float version;
public:
    static float getVersion();
    static void help();
    static void moreHelp();
};

#endif // _APP_HPP