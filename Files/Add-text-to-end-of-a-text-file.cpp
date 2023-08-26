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
    string text;

    file.open("confucio.txt", ios::app);
    if (file.fail())
    {
        cout << "File could not be opened";
        exit(1);
    }
    cout << "type a text: ";
    getline(cin, text);
    file << text << endl;
    file.close();
}
