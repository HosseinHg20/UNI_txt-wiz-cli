
#include "../include/book.hpp"

using namespace std;

void Book::push(string txt){
    page.push_back(txt);
}

void Book::open(){
    int thisPageNumber = 1;
    char input;

    while (1)
    {
        print(thisPageNumber);

        cin >> input;
        switch (input)
        {
        case 'p':
            if (thisPageNumber != 1){
                thisPageNumber--;
            }
            break;
        case 'n':
            if (thisPageNumber != page.size())
                thisPageNumber++;
            break;
        case 'q':
            return;
        default:
            break;
        }
    }
    
}

int Book::getPagesNumber()
{
    return page.size();
};

string Book::getPage(int n)
{
    return page[n - 1]; 
};

void Book::print(int n){
    cout<< endl
        << "page : " << n << endl << endl
        << getPage(n)
        << endl << endl
        << "help: p=previous, n=next, q=quit" << endl
        << "--->";
}