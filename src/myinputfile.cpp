#include "./../include/myinputfile.hpp"

using namespace std;


MyInputFile::MyInputFile(string name)
{
    open(name);
    if (!is_open())
        throw 123;
    
}

MyInputFile::~MyInputFile()
{
    close();
}
