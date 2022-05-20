#include "./../include/replace.hpp"
#include <vector>

using namespace std;

Replace::Replace(string main, string from, string to) : Str(main), before(from), after(to){
    // cout << "test1" << endl;
    convertion();
    // cout << "test2" << endl;
    print();
    // cout << "test3" << endl;
}

void Replace::convertion(){
    int index;
    while((index = mainText.find(before)) != string::npos) {   
        mainText.erase(index, before.size());
        mainText.insert(index, after);
    }
    result = mainText;
}