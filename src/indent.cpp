#include "./../include/indent.hpp"

using namespace std;

Indent::Indent(string main, string indent) : Txt(main), ind(indent), n(false)
{
    string line;
    while (!file.eof()){
        getline(file, line);
        cout << ind << " " << line << endl;
    }
}

Indent::Indent(string main, string indent, int num) : Txt(main), ind(indent), n(true), number(num) 
{
    string line;
    while (!file.eof()){
        getline(file, line);
        cout << number << " " << ind << " " << line << endl;
        number++;
    }
}

void Indent::help(){
    cout << endl;
    cout << "help indent";
    cout << endl;
}
void Indent::moreHelp(){
    cout << endl;
    cout << "more help indent";
    cout << endl;
}