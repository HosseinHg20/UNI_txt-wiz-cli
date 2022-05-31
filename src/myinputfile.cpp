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

string MyInputFile::getWord(){
    string word;
    char ch;
    while (word.back() != '\n' && ((ch = get()) != ' ')){
        if (eof())
            return word;
        
        word.push_back(ch);
    }
    return word;
}
