#include "./../include/str.hpp"

using namespace std;

Str::Str(string main) : Command(main){ }

void Str::print(){
    cout << result << endl;
}