#include "../include/diff.hpp"

using namespace std;

Diff::Diff(string name1, string name2) : Txt(name1), secondFile(name2){
    convertion();
}

void Diff::convertion(){
    string line1, line2;
    while (!file.eof() || !secondFile.eof())
    {
        if (!file.eof())
            getline(file, line1);
        else
            line1 = "";
        if (!secondFile.eof())
            getline(secondFile, line2);
        else
            line2 = "";

        if (line1 == line2) {
            cout << "#> " << line1 << endl;
        }
        else {
            for (size_t i = 0; i < line1.size() + 3 || i < line2.size() + 3; i++)
                cout << "v";
            cout << endl;
            cout << "1> " << line1 << endl;
            cout << "2> " << line2 << endl;
            for (size_t i = 0; i < line1.size() + 3 || i < line2.size() + 3; i++)
                cout << "-";
            cout << endl;
        }
    }
}

void Diff::help(){
    cout << endl;
    cout << "help Diff";
    cout << endl;
}
void Diff::moreHelp(){
    cout << endl;
    cout << "more help Diff";
    cout << endl;
}