#include <iostream>
#include <conio.h>

using namespace std;

struct Promedio{
    float nota1;
    float nota2;
    float nota3;
};

struct Alumno{
    char Nombre[20];
    char Sexo[20];
    int Edad;
    struct Promedio prom;
}al1;

int main(){

    float Promedio_Final;

    cout<<"Dijite su nombre: ";
    cin.getline(al1.Nombre,20,'\n');
    cout<<"Dijite su sexo: ";
    cin.getline(al1.Sexo,20,'\n');
    cout<<"Dijite su edad: ";
    cin>>al1.Edad;

    cout<<"\n Notas del alubno: \n";
    cout<<"Nota1: "; cin>>al1.prom.nota1;
    cout<<"Nota2: "; cin>>al1.prom.nota2;
    cout<<"Nota3: "; cin>>al1.prom.nota3;

    Promedio_Final = (al1.prom.nota1 + al1.prom.nota2 + al1.prom.nota3) / 3;

    cout<<"\nDatos del alumno\n";
    cout<<"Nombre: "<<al1.Nombre<<endl;
    cout<<"Sexo: "<<al1.Sexo<<endl;
    cout<<"Edad: "<<al1.Edad<<endl;
    cout<<"Promedio: "<<Promedio_Final<<endl;

    getch();
    return 0;
}