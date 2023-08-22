#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

void pedirdatos();
void contarvocales(char *);

char cadena[50];

int main()
{
    pedirdatos();
    contarvocales(cadena);

    getch();
    return 0;
}

void pedirdatos()
{
    cout<<"Dijite una frase: ";
    cin.getline(cadena,50,'\n');
    strupr(cadena);
}

void contarvocales(char *cadena) {
    int lA = 0,LE = 0,LI = 0,LO = 0,LU = 0;
    
    while (*cadena)
    {
        switch (*cadena)
        {
        case 'A': lA++; break;
        case 'E': LE++; break;
        case 'I': LI++; break;
        case 'O': LO++; break;
        case 'U': LU++; break;
        }
        cadena ++;
    }
    cout<<endl<<"El numero de letras a es: "<<lA<<endl;
    cout<<"El numero de letras e es: "<<LE<<endl;
    cout<<"El numero de letras i es: "<<LI<<endl;
    cout<<"El numero de letras o es: "<<LO<<endl;
    cout<<"El numero de letras u es: "<<LU<<endl;
}