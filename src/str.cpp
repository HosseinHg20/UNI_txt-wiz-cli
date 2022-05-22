#include "./../include/str.hpp"
#include "./../include/app.hpp"

using namespace std;


Str::Str(string main) : Command(main){ }

const char* args[] = {  "str capitalize \"text\"",
                        "str reverse \"text\"",
                        "str replace \"old\" \"new\" \"text\"", 
                        "str split \"text\" \"delimiter\"", 
                        "str evaluate \"number\" \"base\"", 
                        "str find \"match\" \"text\"",
                        "str --help"
                        };
std::vector<std::string> Str::commands(args, args + 7);

void Str::moreHelp(){
    help();
    cout << endl;
    
    cout << "** more help [str] :" << endl;
    Capitalize::moreHelp();
    Reverse::moreHelp();
    Replace::moreHelp();
    Split::moreHelp();
    Evaluate::moreHelp();
    Find::moreHelp();
}

void Str::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli " << commands[0] << endl;
    for (size_t i = 1; i < commands.size(); i++)
        cout << "                        " << commands[i] << endl;
    cout << endl;
}

void Str::print(){
    cout << result << endl;
}