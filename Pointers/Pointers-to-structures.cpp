#include <iostream>
#include <conio.h>

using namespace std;

struct Persona
{
    char nombre[30];
    int edad;
}persona,*dirp = &persona;

void pedirdatos();
void mostrardatos(Persona *);

int main()
{
    pedirdatos();
    mostrardatos(dirp);
    
    getch();
    return 0;
}

void pedirdatos()
{
    cout<<"Dijite su nombre: ";
    cin.getline(dirp->nombre,30,'\n');
    cout<<"Dijite su edad: ";
    cin>>dirp->edad;
}

void mostrardatos(Persona *dirp)
{
    cout<<"\nSu nombre es: "<<dirp->nombre<<endl;
    cout<<"Su edad es: "<<dirp->edad<<endl;
}
