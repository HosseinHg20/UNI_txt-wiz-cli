#include "./../include/app.hpp"

using namespace std;

float App::version = 2.4;

float App::getVersion(){
    return version;
}

void App::help(){
    cout<< endl
        << "* usage : ./txt-wiz-cli str" << endl
        << "                        str --help" << endl
        << "                        txt" << endl
        << "                        txt --help" << endl
        << "                        --help" << endl;

    cout << endl;
    cout << "  #              #  " << endl;
    cout << "#####   #  #   #####" << endl;
    cout << "  #      #       #  " << endl;
    cout << "  #    #  #      #  " << endl << endl;

    cout << "Verson : " << version << endl;
    cout << "informations ..." << endl << endl;
}

void App::moreHelp(){
    help();

    cout << "*** more help [app] :" << endl;
    Str::moreHelp();
    Txt::moreHelp();
}