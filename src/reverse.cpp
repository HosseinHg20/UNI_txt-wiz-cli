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