#include <iostream>
#include <conio.h>

using namespace std;

struct Tiempo{
    int Horas;
    int Minutos;
    int Segundos;
}T[3], *dir_t = T;

void pedirdatos();
void tiempoetotal(Tiempo *);

int main()
{
    pedirdatos();
    tiempoetotal(dir_t);
    
    getch();    
    return 0;
}

void pedirdatos()
{
    for (int i = 0; i < 3; i++)
    {
        fflush(stdin);
        cout<<"Horas: "; cin>>(dir_t+i)->Horas;
        cout<<"Minutos: "; cin>>(dir_t+i)->Minutos;
        cout<<"Segundos: "; cin>>(dir_t+i)->Segundos;
        cout<<endl;
    }
}

void tiempoetotal(Tiempo *dir_t)
{
    int ht = 0,mt = 0,st = 0;
    for (int i = 0; i < 3; i++)
    {
        ht += (dir_t+i)->Horas;
        mt += (dir_t+i)->Minutos;
        if (mt >= 60)
        {
            mt -= 60;
            ht++; 
        }
        st += (dir_t+i)->Segundos;
        if (st >= 60)
        {
            st -= 60;
            mt++;
        }
    }
    cout<<endl;
    cout<<"Tiempo total transcurido: "<<endl;
    cout<<"Horas: "<<ht<<endl;
    cout<<"Minutos: "<<mt<<endl;
    cout<<"Segundos: "<<st<<endl;

}