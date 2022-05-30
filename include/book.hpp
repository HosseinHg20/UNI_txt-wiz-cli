#ifndef _BOOK_HPP
#define _BOOK_HPP

#include <iostream>
#include <vector>

class Book
{
private:
    std::vector<std::string> page;
public:
    void push(std::string);
    void open();
    void next();
    void previous();

    int getPagesNumber();
    std::string getPage(int n);
    void print(int);
};

#endif // _BOOK_HPP