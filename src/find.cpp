#include "./../include/Find.hpp"

using namespace std;

Find::Find(string main, string find) : Str(main), match(find){
    // cout << "test1" << endl;
    conversion();
    // cout << "test2" << endl;
    print();
    // cout << "test3" << endl;
}

void Find::conversion(){
    int result_counter = 0;
    string word = match;
    // remove '-' char from word
    while (word.find('-') != string::npos)
    {
        word.pop_back();
    }
    // find word in mainText
    int index;
    if((index = mainText.find(word)) != string::npos) {
        result = mainText.substr(index, match.size());
    }
    else{
        cout << "Not found!" << endl;
        throw;
    }
}


void Find::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str Find \"match\" \"text\"" << endl;
    cout << "                                 --help" << endl << endl;
}

void Find::moreHelp(){
    help();
    cout << endl;
    
    cout << "example " << endl;
    cout << "informations ..." << endl << endl;
}