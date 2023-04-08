#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cad1[] = "Hola que tal ";
    char cad2[20],cad3[30];

    strcpy(cad3,cad1);

    cout<<"Digite su nombre: ";
    cin.getline(cad2,20,'\n');

    strcat(cad3,cad2);

    cout<<cad3<<endl;

    getch();
    return 0;
}