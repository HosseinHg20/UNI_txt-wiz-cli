#include "./../include/txt.hpp"
#include "./../include/app.hpp"

using namespace std;


Txt::Txt(string main) : Command(main), file(main){
    
}

void Txt::moreHelp(){
    help();
    cout << endl;
    
    cout << "** more help [txt] :" << endl;
    
}

void Txt::help(){
    cout << endl;
    cout << "help txt";
    cout << endl;
}

