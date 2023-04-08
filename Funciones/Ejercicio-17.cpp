#include <iostream>
#include <conio.h>

using namespace std;

struct Complejo
{
    float real,imaginaria;
}z1,z2;

void pedirdatos();
Complejo suma(Complejo,Complejo);
void mostrar(Complejo);

int main()
{
    pedirdatos();

    Complejo x = suma(z1,z2);

    mostrar(x);
    getch();
    return 0;
}

void pedirdatos()
{
    cout<<"Dijite los datos para el primer numero complejo: "<<endl;
    cout<<"Parte real: "; cin>>z1.real;
    cout<<"Parte imaginaria: "; cin>>z1.imaginaria;
    cout<<endl<<"Dijite los datos para el segundo numero complejo: "<<endl;
    cout<<"Parte real: "; cin>>z2.real;
    cout<<"Parte imaginaria: "; cin>>z2.imaginaria;
}

Complejo suma(Complejo z1,Complejo z2)
{
    z1.real += z2.real;
    z1.imaginaria += z2.imaginaria; 

    return z1;
}

void mostrar(Complejo x)
{
    cout<<endl<<"El resultado de la suma es: "<<x.real<<" , "<<x.imaginaria<<endl;
}                       