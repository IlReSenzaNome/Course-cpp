#include <iostream>
#include <conio.h>

using namespace std;

struct empleados{
    char Nombre[20];
    float Salario;
}emp[100];

int main(){
    int n_empleados,MaS = 0,MeS = 0;
    float mayor = 0,menor = 999999;

    cout<<"Digite el numeros de empleadios: ";
    cin>>n_empleados;

    for (int i = 0; i < n_empleados; i++){
        fflush(stdin);
        cout<<"Dijite su nombre: ";
        cin.getline(emp[i].Nombre,20,'\n');
        cout<<"Dijite su salario: ";
        cin>>emp[i].Salario;
        if (emp[i].Salario > mayor){
            mayor = emp[i].Salario;
            MaS = i;
        }
        if (emp[i].Salario < menor){
            menor = emp[i].Salario;
            MeS = i;
        }
        cout<<"\n";
    }
    
    cout<<"\tNombre del empleado con el mayor salario: "<<endl;
    cout<<"Nombre: "<<emp[MaS].Nombre<<endl;
    cout<<"Salario: "<<emp[MaS].Salario<<endl;

    cout<<"\tNombre del empleado con el menor salario: "<<endl;
    cout<<"Nombre: "<<emp[MeS].Nombre<<endl;
    cout<<"Salario: "<<emp[MeS].Salario<<endl;

    getch();
    return 0;
}