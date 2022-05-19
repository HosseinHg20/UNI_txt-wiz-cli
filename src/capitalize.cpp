#include "./../include/capitalize.hpp"

using namespace std;

Capitalize::Capitalize(string main) : Str(main){
    // cout << "test1" << endl;
    convertion();
    // cout << "test2" << endl;
    print();
    // cout << "test3" << endl;
}

void Capitalize::convertion(){
    for (size_t i = 0; i < mainText.size(); i++){
        if ( i == 0 || !isalpha( mainText[i - 1] ) ){
            result.push_back( toupper(mainText[i]) );
        }
        else{
            result.push_back( mainText[i] );
        }
    }
}