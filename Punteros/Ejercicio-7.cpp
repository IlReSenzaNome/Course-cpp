#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pedirdatos();
int contar(char *);

char Nombreusuario[30];

int main(int argc, char const *argv[])
{
    pedirdatos();
    cout<<endl<<"El numero de vocales en el arreglo es: "<<contar(Nombreusuario)<<endl;

    getch();
    return 0;
}

void pedirdatos() {
    cout<<"Dijite su nombre: ";
    cin.getline(Nombreusuario,30,'\n');
    strupr(Nombreusuario);
}

int contar(char *Nombreusuario) {
    int cont = 0;

    while (*Nombreusuario)
    {
        switch (*Nombreusuario)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cont++;
        }
        Nombreusuario++;
    }
    return cont;
}