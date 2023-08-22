#include <iostream>
#include <conio.h>

using namespace std;

struct Alumno 
{
    char nombre[30];
    int edad;
    float promedio;
}Pro[3], *dir_p = Pro;

void pedirdatos();
void mejorpro(Alumno *);

int main()
{
    pedirdatos();
    mejorpro(dir_p);

    getch();
    return 0;
}

void pedirdatos()
{
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout<<"Dijite su nombre: ";
        cin.getline((dir_p+i)->nombre,30,'\n');
        cout<<"Dijite su edad: ";
        cin>>(dir_p+i)->edad;
        cout<<"Dijite su promedio: ";
        cin>>(dir_p+i)->promedio;
        cout<<endl;
    }
}

void mejorpro(Alumno *dir_p)
{
    float mayor = 0.0;
    int pos = 0;
    for (int i = 0; i < 3; i++)
    {
        if ((dir_p+i)->promedio > mayor)
        {
            mayor = (dir_p+i)->promedio;
            pos = i;
        }
    }
    cout<<endl<<"El alumno con mejor promedio es: "<<endl;
    cout<<"Nombre: "<<(dir_p+pos)->nombre<<endl;
    cout<<"Edad: "<<(dir_p+pos)->edad<<endl;
    cout<<"Promedio: "<<(dir_p+pos)->promedio<<endl;

}