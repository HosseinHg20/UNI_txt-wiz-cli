#include <iostream>
#include <string>
#include "./../include/app.hpp"
using namespace std;

  
int main(int argc, char** argv){

    vector<string> inputs;
    for (size_t i = 0; i < argc; i++){
        inputs.push_back(argv[i]);
    }
    
    if (argc == 1){
        App::help();
        return 0;
    }

    if (inputs[1] == "--help"){
        App::moreHelp();
    }
    
    else if (inputs[1] == "str"){
        // cout << "---------test main 0----------" << endl;
        if (argc == 2){
            Str::help();
        }
        else if (inputs[2] == "--help"){
            // cout << "---------test main 1----------" << endl;
            Str::moreHelp();
        }
        else if (inputs[2] == "capitalize"){
            // cout << "---------test main 1----------" << endl;
            if (argc == 3){
                Capitalize::help();
            }
            else if (inputs[3] == "--help"){
                Capitalize::moreHelp();
            }
            else if (argc == 4){
                Capitalize c(inputs[3]);
            }
            else {
                Capitalize::help();
            }
        }
        else if (inputs[2] == "reverse"){
            // cout << "---------test main 1----------" << endl;
            if (argc == 3){
                Reverse::help();
            }
            else if (inputs[3] == "--help"){
                Reverse::moreHelp();
            }
            else if (argc == 4){
                Reverse r(inputs[3]);
            }
            else {
                Reverse::help();
            }
        }
        else if (inputs[2] == "replace"){
            // cout << "---------test main 1----------" << endl;
            if (argc == 3){
                Replace::help();
            }
            else if (inputs[3] == "--help"){
                Replace::moreHelp();
            }
            else if (argc == 6){
                Replace r(inputs[5], inputs[3], inputs[4]);
            }
            else {
                Replace::help();
            }
        }
        else if (inputs[2] == "split"){
            // cout << "---------test main 1----------" << endl;
            if (argc == 3){
                Split::help();
            }
            else if (inputs[3] == "--help"){
                Split::moreHelp();
            }
            else if (argc == 5){
                Split s(inputs[3], (inputs[4])[0]);
            }
            else {
                Split::help();
            }
        }
        else if (inputs[2] == "evaluate"){
            // cout << "---------test main 1----------" << endl;
            if (argc == 3){
                Evaluate::help();
            }
            else if (inputs[3] == "--help"){
                Evaluate::moreHelp();
            }
            else if (argc == 5){
                Evaluate(inputs[3], stoi(inputs[4]));
            }
            else {
                Evaluate::help();
            }
        }
        else if (inputs[2] == "find"){
            // cout << "---------test main 1----------" << endl;
            if (argc == 3){
                Evaluate::help();
            }
            else if (inputs[3] == "--help"){
                Evaluate::moreHelp();
            }
            else if (argc == 5){
                Find(inputs[4], inputs[3]);
            }
            else {
                Evaluate::help();
            }
        }
        else{
            Str::help();
        }
    }
    else{
        App::help();
    }


    return 0;
}