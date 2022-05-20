#include "./../include/app.hpp"

using namespace std;

float App::version = 1.5;
const char* args[] = {"help",
                        "str capitalize \"text\"",
                        "str reverse \"text\"",
                        "str replace \"old\" \"new\" \"text\"", 
                        "str split \"text\" \"delimiter\""};
std::vector<std::string> App::commands(args, args + 5);

float App::getVersion(){
    return version;
}

void App::help(){
    cout << "Verson : " << version << endl;
    cout << "usage : ./txt-wiz-cli [ " << commands[0] << " ] " << endl;
    for (size_t i = 1; i < commands.size(); i++)
        cout << "                      [ " << commands[i] << " ] \n";
}