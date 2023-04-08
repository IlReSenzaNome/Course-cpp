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
}al1[100];

int main(){
    float Promedio_Final[100],my = 0;
    int N_Alumnos,PM = 0;

    cout<<"Dijite el numero de estiduantes: ";
    cin>>N_Alumnos;

    for (int i = 0; i < N_Alumnos; i++){
    fflush(stdin);
    cout<<"Dijite su nombre: ";
    cin.getline(al1[i].Nombre,20,'\n');
    cout<<"Dijite su sexo: ";
    cin.getline(al1[i].Sexo,20,'\n');
    cout<<"Dijite su edad: ";
    cin>>al1[i].Edad;

    cout<<"\n Notas del alubno: \n";
    cout<<"Nota1: "; cin>>al1[i].prom.nota1;
    cout<<"Nota2: "; cin>>al1[i].prom.nota2;
    cout<<"Nota3: "; cin>>al1[i].prom.nota3;

    Promedio_Final[i] = (al1[i].prom.nota1 + al1[i].prom.nota2 + al1[i].prom.nota3) / 3;

        if (Promedio_Final[i] > my){
            my = Promedio_Final[i];
            PM = i;
        }
        cout<<"\n";
    }
    
    cout<<"\n Datos del mejor estudiante: \n";
    cout<<"Nombre: "<<al1[PM].Nombre<<endl;
    cout<<"Sexo: "<<al1[PM].Sexo<<endl;
    cout<<"Edad: "<<al1[PM].Edad<<endl;
    cout<<"Promedio: "<<Promedio_Final[PM]<<endl;

    getch();
    return 0;
}