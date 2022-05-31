#include "./../include/replace.hpp"

#include <vector>

using namespace std;

Replace::Replace(string main, string from, string to) : Str(main), before(from), after(to){
    convertion();
    print();
}

void Replace::convertion(){
    int index;
    while((index = mainText.find(before)) != string::npos) {   
        mainText.erase(index, before.size());
        mainText.insert(index, after);
    }
    result = mainText;
}

void Replace::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str replace \"old\" \"new\" \"text\"" << endl;
    cout << "                                     --help" << endl << endl;
}

void Replace::moreHelp(){
    help();
    cout << endl
         << "replace" << endl
         << "./txt_wiz_cli str reverse <old> <new> <string>" << endl 
         << "input : ./txt_wiz_cli str reverse \"mini\" \"nini\" \"mini project\"" << endl
         << "output : nini project" << endl;
}