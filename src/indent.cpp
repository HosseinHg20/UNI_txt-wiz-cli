#include "./../include/indent.hpp"

using namespace std;

Indent::Indent(string main, string indent) : Txt(main), ind(indent), n(false)
{
    string line;
    while (!file.eof())
    {
        getline(file, line);
        cout << ind << " " << line << endl;
    }
    
}

Indent::Indent(string main, string indent, int num) : Txt(main), ind(indent), n(true), number(num) 
{
    string line;
    while (!file.eof())
    {
        getline(file, line);
        cout << number << " " << ind << " " << line << endl;
        number++;
    }
}

Indent::~Indent()
{

}