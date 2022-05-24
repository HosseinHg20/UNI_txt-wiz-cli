#include "./../include/app.hpp"

using namespace std;

float App::version = 1.9;

float App::getVersion(){
    return version;
}

void App::moreHelp(){
    help();

    cout << "*** more help [app] :" << endl;
    Str::moreHelp();
}
void App::help(){
    cout << endl;
    cout << "* usage : ./txt-wiz-cli str" << endl;
    cout << "                        str --help" << endl;
    cout << "                        txt" << endl;
    cout << "                        txt --help" << endl;
    cout << "                        --help" << endl;

    cout << endl;
    cout << "  #              #  " << endl;
    cout << "#####   #  #   #####" << endl;
    cout << "  #      #       #  " << endl;
    cout << "  #    #  #      #  " << endl << endl;

    cout << "Verson : " << version << endl;
    cout << "informations ..." << endl << endl;
    
}