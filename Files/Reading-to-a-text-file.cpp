#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void reading();

int main(int argc, char const *argv[])
{
    reading();

    getch();
    return 0;
}

void reading()
{
    ifstream file;
    string text;
    file.open("reading.txt", ios::in);
    if (file.fail())
    {
        cout << "Error opening file";
        exit(1);
    }
    while (!file.eof())
    {
        getline(file, text);
        cout << text << endl;
    }
    file.close();
}