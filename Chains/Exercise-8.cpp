#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    char cad1[20],cad2[20];
    int numero;
    float numero1,resultado = 0;

    cout<<"Digite una cadena de caracteres de numeros enteros: ";
    cin.getline(cad1,20,'\n');
    cout<<"Digite una cadena de caracteres de numeros reales: ";
    cin.getline(cad2,20,'\n');

    numero = atoi(cad1);
    numero1 = atof(cad2);

    resultado = numero + numero1;

    cout<<resultado<<endl;

    getch();
    return 0;
}