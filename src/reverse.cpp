#include "./../include/revers.hpp"

using namespace std;

Reverse::Reverse(string main) : Str(main){
    convertion();
    print();
}

void Reverse::convertion(){
    for (int i = mainText.size() - 1; i >= 0; i--)
        result.push_back(mainText[i]);
}

void Reverse::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str reverse \"text\"" << endl;
    cout << "                                     --help" << endl << endl;
}

void Reverse::moreHelp(){
    help();
    cout << endl;

    cout << "example ..." << endl;
    cout << "informations ..." << endl << endl;
}