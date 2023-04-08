#include <iostream>
#include <conio.h>

using namespace std;

struct Persona {
    char nombre[20];
    int edad;
}Persona1;


int main(){
    
    cout<<"Nombre: "<<endl;
    cin.getline(Persona1.nombre,20,'\n');
    cout<<"Edad1: "<<endl;
    cin>>Persona1.edad;
    
    cout<<"\n Imprimiendo los datos\n";
    cout<<"Nombre: "<<Persona1.nombre<<endl;
    cout<<"Edad: "<<Persona1.edad<<endl;

    getch();
    return 0;
}