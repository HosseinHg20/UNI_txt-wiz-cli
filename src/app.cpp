#include "./../include/app.hpp"

using namespace std;

float App::version = 1.2;
const char* args[] = {"help", "02", "03", "04"};
std::vector<std::string> App::commands(args, args + 4);

float App::getVersion(){
    return version;
}

void App::help(){
    cout << "Verson : " << version << endl;
    cout << "usage : ./txt-wiz-cli [ " << commands[0] << " ] " << endl;
    for (size_t i = 1; i < commands.size(); i++)
        cout << "                      [ " << commands[i] << " ] \n";
}