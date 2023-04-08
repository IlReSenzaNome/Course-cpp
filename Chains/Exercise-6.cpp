#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cad1[20],cad2[20];

    cout<<"Digite una cadena de caracteroes: ";
    cin.getline(cad1,20,'\n');
    cout<<"Digite una cadena de caracteroes: ";
    cin.getline(cad2,20,'\n');

    strupr(cad1);
    strupr(cad2);

    if (strcmp(cad1,cad2 ) == 0){
        cout<<"Las cadenas son iguales"<<endl;
    }
    else{
        cout<<"Las cadenas no son iguales"<<endl;
    }

    getch();
    return 0;
}