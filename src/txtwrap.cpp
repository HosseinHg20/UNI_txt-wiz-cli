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
    string this_line;
    while (!file.eof()){
        this_line.push_back(file.get());
        if (this_line.back() == '\n'){
            cout << this_line;
            this_line = "";
        }
        if (this_line.size() == width){
            if (this_line[width - 1] == ' '){
                cout << this_line.substr(0, width - 1) << endl;
                this_line = "";                
            }
            else if (this_line[width - 2] == ' '){
                cout << this_line.substr(0, width - 2) << endl;
                this_line = this_line.substr(width - 1, 1);
            }
            else if (this_line[width - 3] == ' '){
                cout << this_line.substr(0, width - 2) << endl;
                this_line = this_line.substr(width - 2, 2);
            }
            else {
                cout << this_line.substr(0, width - 2) << "-" << endl;
                this_line = this_line.substr(width - 2, 2);
            }
        }
    }
    cout << this_line << endl;
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