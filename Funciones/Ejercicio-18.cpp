/*Ejercicio 18: Escriba una funci�n en C++ llamada mayor() que devuelva la fecha m�s 
reciente de cualquier par de fechas que se le transmitan. Por ejemplo, si se transmiten 
las fechas 10/9/2005 y 11/3/2015 a mayor(), ser� devuelta la segunda fecha.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Fecha
{
    int dia,mes,año;
}f1,f2;

void pedirdatos();
Fecha mayor(Fecha, Fecha);
void mostrar(Fecha);

int main()
{
    pedirdatos();
    Fecha x = mayor(f1,f2);
    mostrar(x);

    getch();
    return 0;
}

void pedirdatos()
{
    cout<<"Dijite la primera fecha: "<<endl;
    cout<<"Dia: "; cin>>f1.dia;
    cout<<"Mes: "; cin>>f1.mes;
    cout<<"Año: "; cin>>f1.año;

    cout<<endl<<"Dijite la segunda fecha: "<<endl;
    cout<<"Dia: "; cin>>f2.dia;
    cout<<"Mes: "; cin>>f2.mes;
    cout<<"Año: "; cin>>f2.año;
}

Fecha mayor(Fecha f1,Fecha f2)
{
    Fecha mayor;
    if (f1.año == f2.año)
    {
        if (f1.mes == f2.mes)
        {
            if (f1.dia == f2.dia)
            {
                cout<<endl<<"Ambas fechas son iguales"<<endl;
            }
            else if (f1.dia > f2.dia)
            {
                mayor = f1;
            }
            else
            {
                mayor = f2;
            }
        }
        else if (f1.mes > f2.mes)
        {
            mayor = f1;
        }
        else
        {
            mayor = f2;
        }
    }
    else if (f1.año > f2.año)
    {
        mayor = f1;
    }
    else
    {
        mayor = f2;
    }
    
    return mayor;
}

void mostrar(Fecha x)
{
    cout<<endl<<"La fecha mayor es: "<<x.dia<<"/"<<x.mes<<"/"<<x.año<<endl;
}