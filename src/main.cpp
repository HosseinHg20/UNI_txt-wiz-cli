#include <iostream>
#include "./../include/app.hpp"
using namespace std;

  
int main(int argc, char** argv)
{
    switch (argc)
    {
    case 1:
        App::help();
        break;
    default:
        
        break;
    }
    
    return 0;
}