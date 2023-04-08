#include <iostream>
#include <conio.h>

using namespace std;

struct Tiempo{
    int Horas;
    int Minutos;
    int Segundos;
}T[100];

int main(){
    int N_Etapas,HT = 0,MT = 0,ST = 0;

    cout<<"Dijite el numero de etapas: ";
    cin>>N_Etapas;

    for (int i = 0; i < N_Etapas; i++){
        cout<<"Horas: "; cin>>T[i].Horas;
        cout<<"Minutos: "; cin>>T[i].Minutos;
        cout<<"Segundos: "; cin>>T[i].Segundos;

        HT += T[i].Horas;
        MT += T[i].Minutos;
        if (MT >= 60){
            MT -= 60;
            HT++;
        }
        ST += T[i].Segundos;
        if (ST >= 60){
            ST -= 60;
            MT++;
        }
        cout<<"\n";
    }
    
    cout<<"\n Tiempo total empleado: \n";
    cout<<"Horas: "<<HT<<endl;
    cout<<"Minutos: "<<MT<<endl;
    cout<<"Segundos: "<<ST<<endl;

    getch();
    return 0;
}