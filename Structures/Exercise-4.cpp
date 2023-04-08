#include <iostream>
#include <conio.h>

using namespace std;

struct Atletas{
    char Nombre[20];
    char Pais[20];
    int Numero_Medallas; 
}Atl[100];

int main(){
    int N_atletas,Mayor = 0,Pos = 0;

    cout<<"Digite el numero de atletas: ";
    cin>>N_atletas;

    for (int i = 0; i < N_atletas; i++){
        fflush(stdin);
        cout<<"Digite su nombre: ";
        cin.getline(Atl[i].Nombre,20,'\n');
        cout<<"Digite su pais: ";
        cin.getline(Atl[i].Pais,20,'\n');
        cout<<"Digite el numero de medallas ganadas: ";
        cin>>Atl[i].Numero_Medallas;

        if (Atl[i].Numero_Medallas > Mayor){
            Mayor = Atl[i].Numero_Medallas;
            Pos = i;
        }
        cout<<"\n";
    }
    
    cout<<"\t El atleta con mas medallas es: "<<endl;
    cout<<"Nombre: "<<Atl[Pos].Nombre<<endl;
    cout<<"Pais: "<<Atl[Pos].Pais<<endl;

    getch();
    return 0;
}