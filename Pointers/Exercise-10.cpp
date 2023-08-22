#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirdatos();
void transpuesta(int **,int ,int);

int **matris,nfil,ncol;

int main(int argc, char const *argv[])
{
    pedirdatos();
    transpuesta(matris,nfil,ncol);

    for (int i = 0; i < nfil; i++)
    {
        delete matris[i];
    }
    delete[] matris;

    getch();
    return 0;
}

void pedirdatos()
{
    cout<<"Dijite el numero de filas: ";
    cin>>nfil;
    cout<<"Dijite el numero de colubnas: ";
    cin>>ncol;

    matris = new int *[nfil];
    for (int i = 0; i < nfil; i++)
    {
        matris[i] = new int [ncol];
    }

    cout<<endl<<"Dijite los elementos de la primera matris: "<<endl;
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<"Dijite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matris+i)+j);
        }
    }
}

void transpuesta(int **matris,int nfil,int ncol)
{
    cout<<endl<<"Matris original: "<<endl;
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<*(*(matris+i)+j)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<endl<<"Matris transpuesta: "<<endl;
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<*(*(matris+j)+i)<<" ";
        }
        cout<<endl;
    }
    cout<<endl;    
}
