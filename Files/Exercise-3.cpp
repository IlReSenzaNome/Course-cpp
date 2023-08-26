#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void addtext();

int main(int argc, char const *argv[])
{
    addtext();
    getch();
    return 0;
}

void addtext()
{
    ofstream file;
    string text, name;
    char option;
    cout << "Enter a name file: ";
    getline(cin, name);
    file.open(name.c_str(), ios::app);
    if (file.fail())
    {
        cout << "File not found!";
        exit(1);
    }
    do
    {
        fflush(stdin);
        cout << "Enter text: ";
        getline(cin, text);
        file << text << endl;
        cout << "Do you want to continue? (Y/N): ";
        cin >> option;
    } while ((option == 'Y') || (option == 'y'));

    file.close();
}
