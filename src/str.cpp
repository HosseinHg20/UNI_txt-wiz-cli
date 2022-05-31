#include "./../include/str.hpp"
#include "./../include/app.hpp"

using namespace std;

void Str::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str capitalize \"text\"" << endl
         << "                        str reverse \"text\"" << endl
         << "                        str replace \"old\" \"new\" \"text\"" << endl
         << "                        str split \"text\" \"delimiter\"" << endl
         << "                        str evaluate \"number\" \"base\""  << endl
         << "                        str find \"match\" \"text\"" << endl
         << "                        str --help";
    cout << endl;
}

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

Str::Str(string main) : Command(main){ }

void Str::print(){
    cout << result << endl;
}