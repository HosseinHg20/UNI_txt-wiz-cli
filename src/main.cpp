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
            if (inputs[2] == "capitalize" && argc == 4){
                // cout << "---------test main 1----------" << endl;
                Capitalize c(inputs[3]);
            }
            else if (inputs[2] == "reverse" && argc == 4){
                // cout << "---------test main 1----------" << endl;
                Reverse r(inputs[3]);
            }
            else if (inputs[2] == "replace" && argc == 6){
                // cout << "---------test main 1----------" << endl;
                Replace r(inputs[5], inputs[3], inputs[4]);
            }
            else if (inputs[2] == "split" && argc == 5){
                // cout << "---------test main 1----------" << endl;
                Split s(inputs[3], (inputs[4])[0]);
            }
            else if (inputs[2] == "evaluate" && argc == 5){
                // cout << "---------test main 1----------" << endl;
                Evaluate(inputs[3], stoi(inputs[4]));
            }
            else if (inputs[2] == "find" && argc == 5){
                // cout << "---------test main 1----------" << endl;
                Find(inputs[4], inputs[3]);
            }
            else{
                App::help();
            }
        }
        else{
            App::help();
        }


        break;
    }
    
    return 0;
}