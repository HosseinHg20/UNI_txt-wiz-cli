#include <iostream>
#include <string>
#include "./../include/app.hpp"
using namespace std;

  
int main(int argc, char** argv)
{
    vector<string> inputs;
    for (size_t i = 0; i < argc; i++)
    {
        inputs.push_back(argv[i]);
    }
    
    switch (argc)
    {
    case 1:
        App::help();
        break;
    default:
        if (inputs[1] == "str")
        {
            // cout << "---------test main 0----------" << endl;
            if (inputs[2] == "capitalize")
            {
                // cout << "---------test main 1----------" << endl;
                Capitalize c(inputs[3]);
            }
            else if (inputs[2] == "reverse")
            {
                // cout << "---------test main 1----------" << endl;
                Reverse r(inputs[3]);
            }
        }
        


        break;
    }
    
    return 0;
}