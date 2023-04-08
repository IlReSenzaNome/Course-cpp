#include <iostream>
#include <conio.h>

using namespace std;

struct Alumno{
    char Nombre[20];
    int Edad;
    float Promedio;
}Alubno[3];

int main(){
    int mayor = 0, pos = 0;

    for (int i = 0; i < 3; i++){
        fflush(stdin);
        cout<<"Nombre: "; 
        cin.getline(Alubno[i].Nombre,20,'\n');
        cout<<"Edad: ";
        cin>>Alubno[i].Edad;
        cout<<"Promedio: ";
        cin>>Alubno[i].Promedio;

        if (Alubno[i].Promedio > mayor){
            mayor = Alubno[i].Promedio;
            pos = i;
        }
        cout<<"\n";
    }
    
    cout<<"\n Mejor estudiante: \n";
    cout<<"Nombre: "<<Alubno[pos].Nombre<<endl;
    cout<<"Edad: "<<Alubno[pos].Edad<<endl;
    cout<<"Promedio: "<<Alubno[pos].Promedio<<endl;

    getch();
    return 0;
}