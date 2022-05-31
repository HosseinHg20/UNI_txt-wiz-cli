#include "./../include/Evaluate.hpp"

using namespace std;

Evaluate::Evaluate(string main, int num) : Str(main), base(num){
    conversion();
    print();
}

void Evaluate::print(){
    cout << endl;
    cout << "Number : " << mainText << endl;
    cout << "base : " << base << endl << endl;
    
    cout << "Number : ";
    Str::print();
    cout << "base : " << "10";
    cout << endl;
}

void Evaluate::conversion(){
    int result = 0;
    int value = 1;
    for (int i = mainText.size() - 1; i >= 0; i--)
    {
        int digit = mainText[i];
        if (digit >= '0' && digit <= '9')
            digit -= '0';

        else if (digit >= 'A' && digit <= 'Z')
            digit -= ('A' - 10);

        else if (digit >= 'a' && digit <= 'z')
            digit -= ('a' - 10);

        else
            throw;

        if (digit >= base)
            throw;

        result += (digit * value);
        value *= base;
    }
    Str::result = to_string(result);
}


void Evaluate::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str evaluate \"number\" \"bace\"" << endl;
    cout << "                                     --help" << endl << endl;
}

void Evaluate::moreHelp(){
    help();
    cout << endl;
    
    cout << "example " << endl;
    cout << "informations ..." << endl << endl;
}