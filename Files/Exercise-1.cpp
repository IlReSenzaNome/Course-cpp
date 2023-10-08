#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void write();

int main(int argc, char const *argv[])
{
    write();

    getch();
    return 0;
}

void write()
{
    ofstream file;
    string name, phrase;
    char option;

    cout << "Enter your name file: ";
    getline(cin, name);
    file.open(name.c_str(), ios::out);
    if (file.fail())
    {
        cout << "Error opening file" << endl;
        exit(1);
    }

    do
    {
        fflush(stdin);
        cout << "Enter a phrase: ";
        getline(cin, phrase);
        file << phrase << endl;
        cout << "Do you want to continue? (Y/N): ";
        cin >> option;
    } while ((option == 'Y') || (option == 'y'));
    file.close();
}
