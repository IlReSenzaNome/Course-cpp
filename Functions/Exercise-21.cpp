#include <iostream>
#include <conio.h>

using namespace std;

int potencia(int ,int );

int main()
{
    int base,exponente;
    
    cout<<"Dijite la base: ";
    cin>>base;
    cout<<"Dijite el exponente: ";
    cin>>exponente;

    cout<<"Potencia de "<<base<<" elevado a "<<exponente<<" es: "<<potencia(base,exponente)<<endl;

    getch();
    return 0;
}

int potencia(int x,int y)
{
    if (y == 1)
    {
        return x;
    }
    else
    {
        return x * potencia(x,y - 1);
    }
}