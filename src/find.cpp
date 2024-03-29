#include "./../include/Find.hpp"

using namespace std;

Find::Find(string main, string find) : Str(main), match(find){
    conversion();
    print();
}

void Find::conversion(){
    int result_counter = 0;
    string word = match;
    // remove '-' char from word
    while (word.find('-') != string::npos)
        word.pop_back();
    
    // find word in mainText
    int index;
    if((index = mainText.find(word)) != string::npos) {
        result = mainText.substr(index, match.size());
    }
    else{
        result = "Not found!";
    }
}


void Find::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str Find \"match\" \"text\"" << endl;
    cout << "                                 --help" << endl << endl;
}

void Find::moreHelp(){
    help();
    cout << endl
         << "find" << endl
         << "./txt_wiz_cli str find <match> <string>" << endl 
         << "input : ./txt-wiz-cli str find \"mi--\" \"mini Project\"" << endl
         << "output : mini" << endl;
}