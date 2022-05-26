#include "./../include/txtwrap.hpp"

using namespace std;

Wrap::Wrap(string main, int w, bool f) : Txt(main), width(w), f_flag(f)
{
    if (f)
        convertion_f();
    else
        convertion();
}

void Wrap::convertion_f(){

}
void Wrap::convertion(){

    string word;
    int this_line_width = 0;
    while (!file.eof()){ 
        word = file.getWord();
        if (word.empty())
            return;

        if ((word.size() + this_line_width) < width){
            this_line_width += (word.size() + 1);
            cout << word;
        }
        else{
            this_line_width = (word.size() + 1);
            cout << endl << word;
        }
        if (word.back() == '\n')
            this_line_width = 0;
        else
            cout << " ";
    }
    
}

Wrap::~Wrap()
{

}

void Wrap::help(){
    cout << endl;
    cout << "help Wrap";
    cout << endl;
}
void Wrap::moreHelp(){
    cout << endl;
    cout << "more help Wrap";
    cout << endl;
}