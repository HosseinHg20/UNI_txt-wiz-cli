#include "./../include/split.hpp"

using namespace std;

Split::Split(string main, char ch) : Str(main), delimiter(ch){
    convertion();
    print();
}

void Split::convertion(){
    string word;
    result = "{";
    for (size_t i = 0; i < mainText.size(); i++){
        if (mainText[i] == delimiter){
            result.append(word + ", ");
            word = "";
        }
        else
            word.push_back(mainText[i]);
    }
    result.append(word + "}");
}

void Split::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str split \"text\" \"delimiter\"" << endl;
    cout << "                                  --help" << endl << endl;
}

void Split::moreHelp(){
    help();
    cout << endl;
    
    cout << "example " << endl;
    cout << "informations ..." << endl << endl;
}