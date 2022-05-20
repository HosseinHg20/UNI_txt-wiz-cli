#include "./../include/split.hpp"

using namespace std;

Split::Split(string main, char ch) : Str(main), delimiter(ch){
    // cout << "test1" << endl;
    convertion();
    // cout << "test2" << endl;
    print();
    // cout << "test3" << endl;
}

void Split::convertion(){
    string word;
    result = "{";
    for (size_t i = 0; i < mainText.size(); i++){
        if (mainText[i] == delimiter){
            result.append(word + ", ");
            word = "";
        }
        else{
            word.push_back(mainText[i]);
        }
    }
    result.append(word + "}");
}