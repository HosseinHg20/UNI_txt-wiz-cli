#include "./../include/revers.hpp"

using namespace std;

Reverse::Reverse(string main) : Str(main){
    // cout << "test1" << endl;
    convertion();
    // cout << "test2" << endl;
    print();
    // cout << "test3" << endl;
}

void Reverse::convertion(){
    for (int i = mainText.size() - 1; i >= 0; i--)
    {
        cout << mainText[i];
    }
    
}

void Reverse::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str Reverse \"text\"" << endl;
    cout << "                                     --help" << endl << endl;
}

void Reverse::moreHelp(){
    help();
    cout << endl;

    cout << "example " << endl;
    cout << "informations ..." << endl << endl;
}