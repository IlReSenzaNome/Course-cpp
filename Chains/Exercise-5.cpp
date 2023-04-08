#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cad[20],cad2[20];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(cad,20,'\n');

    strcpy(cad2,cad);

    strrev(cad);

    if (strcmp(cad,cad2) == 0){
        cout<<"La palabra es palindroma"<<endl;
    }
    else{
        cout<<"La palabra no es palindroma"<<endl;
    }

    getch();
    return 0;
}