#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void file();

int main(int argc, char const *argv[])
{
    file();

    getch();
    return 0;
}

void file()
{
    ifstream file;
    string read;
    cout << "Enter file name or memory direction: ";
    cin >> read;
    file.open(read.c_str(), ios::in);
    if (file.fail())
    {
        cout << "File not found";
        exit(1);
    }

    while (!file.eof())
    {
        getline(file, read);
        cout << read << endl;
    }
    file.close();
}