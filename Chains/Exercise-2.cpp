#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char digite[100];
    char copia[100];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(digite,100,'\n');

    strcpy(copia,digite);

    cout<<copia<<endl;

    getch();
    return 0;
}