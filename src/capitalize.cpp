#include "./../include/capitalize.hpp"

using namespace std;

void Capitalize::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str capitalize \"text\"" << endl;
    cout << "                                       --help" << endl << endl;
}

void Capitalize::moreHelp(){
    help();
    cout << endl
         << "capitalize" << endl
         << "./txt_wiz_cli str capitalize <string>" << endl 
         << "input : ./txt_wiz_cli str capitalize \"mini project\"" << endl
         << "output : Mini Project" << endl;
}

Capitalize::Capitalize(string main) : Str(main){
    convertion();
    print();
}

void Capitalize::convertion(){
    for (size_t i = 0; i < mainText.size(); i++){
        if ( i == 0 || !isalpha( mainText[i - 1] ) )
            result.push_back( toupper(mainText[i]) );
        else
            result.push_back( mainText[i] );
    }
}