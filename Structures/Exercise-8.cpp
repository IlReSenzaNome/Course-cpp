#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct P_D{
    char Nombre[30];
    bool discapacidad;
}P[30],PD[30],PS[30];

int main(){
    int n_per,j = 0,k = 0;

    cout<<"Digite el numero de personas: ";
    cin>>n_per;

    for (int i = 0; i < n_per; i++){
        fflush(stdin);
        cout<<"Nombre: ";
        cin.getline(P[i].Nombre,30,'\n');
        cout<<"Discapacidad (1/0)?: ";
        cin>>P[i].discapacidad;

        if (P[i].discapacidad == 1){
            strcpy(PD[j].Nombre,P[i].Nombre);
            j++;
        }
        else{
            strcpy(PS[k].Nombre, P[i].Nombre);
            k++;
        }
        cout<<"\n";
    }

    cout<<"\nPersonas con Discapacidad\n";
    for (int i = 0; i < n_per; i++){
        cout<<PD[i].Nombre<<endl;
    }
    
    cout<<"\nPersonas sin Discapacidad\n";
    for (int i = 0; i < n_per; i++){
        cout<<PS[i].Nombre<<endl;
    }

    getch();
    return 0;
}