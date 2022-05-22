#include "./../include/Evaluate.hpp"

using namespace std;

Evaluate::Evaluate(string main, int num) : Str(main), base(num){
    // cout << "test1" << endl;
    conversion();
    // cout << "test2" << endl;
    print();
    // cout << "test3" << endl;
}

void Evaluate::conversion(){
    cout << "test 1 >>> text " << mainText << endl;
    cout << "test 1 >>> base " << base << endl << endl;
    int result = 0;
    int value = 1;
    for (int i = mainText.size() - 1; i >= 0; i--)
    {
        int digit = mainText[i];
        if (digit >= '0' && digit <= '9')
        {
            digit -= '0';
        }
        else if (digit >= 'A' && digit <= 'Z')
        {
            digit -= ('A' - 10);
        }
        else if (digit >= 'a' && digit <= 'z')
        {
            digit -= ('a' - 10);
        }
        else
        {
            throw;
        }
        if (digit >= base)
        {
            throw;
        }
        
        result += (digit * value);
        cout << "test 2 >>> mainText[i] " << mainText[i] << endl;
        cout << "test 2 >>> digit " << digit << endl;
        cout << "test 2 >>> digit * value " << (digit * value) << endl;
        cout << "test 2 >>> result " << result << endl << endl;
        value *= base;
    }
    Str::result = to_string(result);
}


void Evaluate::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str Evaluate \"number\" \"bace\"" << endl;
    cout << "                                     --help" << endl << endl;
}

void Evaluate::moreHelp(){
    help();
    cout << endl;
    
    cout << "example " << endl;
    cout << "informations ..." << endl << endl;
}