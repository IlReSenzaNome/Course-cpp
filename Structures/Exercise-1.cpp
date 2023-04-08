#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct Coredor{
    char Nombre[20];
    int Edad;
    char Sexo[10];
    char Club[20];
}c1;

int main(){
    char categoria[20];

    cout<<"Nombre: ";
    cin.getline(c1.Nombre,20,'\n');
    cout<<"Edad: ";
    cin>>c1.Edad;
    fflush(stdin);
    cout<<"Sexo: ";
    cin.getline(c1.Sexo,10,'\n');
    cout<<"Club: ";
    cin.getline(c1.Club,20,'\n');

    if (c1.Edad <= 18){
        strcpy(categoria, "Juvenil");
    }
    else if (c1.Edad <= 40){
        strcpy(categoria, "Senor");
    }
    else{
        strcpy(categoria, "Veterano");
    }
    
    cout<<"\n\nDatos del corredor: "<<endl;
    cout<<"Nombre: "<<c1.Nombre<<endl;
    cout<<"Edad: "<<c1.Edad<<endl;
    cout<<"Sexo: "<<c1.Sexo<<endl;
    cout<<"Club: "<<c1.Club<<endl;
    cout<<"Categoria: "<<categoria<<endl;

    getch();
    return 0;
}