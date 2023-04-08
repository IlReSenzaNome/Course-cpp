#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirdatos();
void mostrarmatris(int **,int ,int ); 

int **puntero_matris,ncol,nfil;

int main()
{
    pedirdatos();
    mostrarmatris(puntero_matris,nfil,ncol);

    for (int i = 0; i < nfil; i++)
    {
        delete puntero_matris[i];
    }
    delete[] puntero_matris;

    getch();
    return 0;
}

void pedirdatos()
{
    cout<<"Dijite el numero de filas: ";
    cin>>nfil;
    cout<<"dijite el numero de colubnas: ";
    cin>>ncol;

    puntero_matris = new int*[nfil];
    for (int i = 0; i < nfil; i++)
    {
        puntero_matris[i] = new int [ncol];
    }
    cout<<endl<<"Dijite los elementos de la matris: "<<endl;
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<"Dijite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matris+i)+j);
        }
    }
}

void mostrarmatris(int **puntero_matris, int nfil, int ncol) 
{
    for (size_t i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<*(*(puntero_matris+i)+j)<<" ";
        }
        cout<<endl;
    }
}