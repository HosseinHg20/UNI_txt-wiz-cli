#include "../include/slide_show.hpp"

using namespace std;

SlideShow::SlideShow(string name1, int l) : Txt(name1), len(l){
    setAllPages_l();
    char input;
    while (1){ 
        input = getchar();
        switch (input){
        case 'q':
            return;
            break;
        case 'o':
            book.open();
            return;
            break;
        }
    }
}

SlideShow::SlideShow(string name1, char d) : Txt(name1), del(d){
    setAllPages_d();
    char input;
    while (1){ 
        input = getchar();
        switch (input){
        case 'q':
            return;
            break;
        case 'o':
            book.open();
            return;
            break;
        }
    }
    
}

void SlideShow::setAllPages_l(){
    int linesNum = 0;
    string line;
    string str;
    cout << "loading ";
    while (!file.eof()){
        getline(file, line);
        str = str + "\n" + line;
        linesNum++;
        if (linesNum == len){
            book.push(str);
            linesNum = 0;
            str = "";
            cout << ".";
        }
    }
    if (str.back() != '\n')
        book.push(str);
    cout << endl << endl
         << "number of pages : " << book.getPagesNumber() << endl
         << "length : " << len << endl << endl
         << "Help : o=open, q=quit\n" << endl
         << "---> ";
}

void SlideShow::setAllPages_d(){
    char ch;
    string str;
    cout << "loading ";
    while (!file.eof()){
        ch = file.get();
        if (ch == del){
            book.push(str);
            str = "";
            cout << ".";
        }
        else {
            str.push_back(ch);
        }
    }
    if (str.back() != del)
        book.push(str);
    cout << endl << endl
         << "number of pages : " << book.getPagesNumber() << endl
         << "delimiter : " << del << endl << endl
         << "Help : o=open, q=quit\n" << endl
         << "---> ";
}


void SlideShow::help(){
    cout << endl;
    cout << "help Slide";
    cout << endl;
}
void SlideShow::moreHelp(){
    cout << endl;
    cout << "more help Slide";
    cout << endl;
}