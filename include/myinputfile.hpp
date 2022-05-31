#ifndef _MYINPUTFILE_HPP
#define _MYINPUTFILE_HPP

#include <iostream>
#include <fstream>

class MyInputFile : public std::ifstream
{
public:
    MyInputFile(std::string);
    ~MyInputFile();
    std::string getWord();
};

#endif // _MYINPUTFILE_HPP