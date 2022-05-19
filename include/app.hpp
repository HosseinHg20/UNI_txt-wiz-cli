#ifndef _APP_HPP
#define _APP_HPP

#include <iostream>
#include <vector>

class App
{
private:
    static float version;
    static std::vector<std::string> commands;
public:
    static float getVersion();
    static void help();
};

#endif // _APP_HPP