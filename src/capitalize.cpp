#include "./../include/capitalize.hpp"

using namespace std;

void Capitalize::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str capitalize \"text\"" << endl;
    cout << "                                       --help" << endl << endl;
}

void Capitalize::moreHelp(){
    help();
    cout << endl;
    cout << "informations ..." << endl << endl;
    cout << "example capitalize ...";
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