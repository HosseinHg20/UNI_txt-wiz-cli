#ifndef _SLIDE_SHOW_HPP
#define _SLIDE_SHOW_HPP

#include "txt.hpp"
#include "book.hpp"
#include <stack>

class SlideShow : public Txt
{
private:
    Book book;

    int len = 0;
    char del = 0;
public:
    static void help();
    static void moreHelp();
    void convertion();
    void show_information();
    void show_page(int);

    void setAllPages_d();
    void setAllPages_l();

    SlideShow(std::string);
    SlideShow(std::string, int);
    SlideShow(std::string, char);
};




#endif // _SLIDE_SHOW_HPP