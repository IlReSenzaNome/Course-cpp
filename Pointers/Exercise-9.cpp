#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirdatos();
void sumarmatris(int **, int **, int, int);
void mostrarmatrices(int **,int ,int); 

int **matris1,**matris2,nfil,ncol;

int main()
{
    pedirdatos();
    sumarmatris(matris1,matris2,nfil,ncol);
    mostrarmatrices(matris1,nfil,ncol);
    
    for (int i = 0; i <nfil; i++)
    {
        delete matris1[i];
    }
    delete[] matris1; 

    for (int i = 0; i <nfil; i++)
    {
        delete matris2[i];
    }
    delete[] matris2; 


    getch();
    return 0;
}

void pedirdatos() 
{
    cout<<"Dijite el numero de filas: ";
    cin>>nfil;
    cout<<"Dijite el numero de colubnas: ";
    cin>>ncol;

    matris1 = new int *[nfil];
    for (int i = 0; i < nfil; i++)
    {
        matris1[i] = new int [ncol];
    }

    cout<<endl<<"Dijite los elementos de la primera matris: "<<endl;
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<"Dijite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matris1+i)+j);
        }
    }

    matris2 = new int *[nfil];
    for (int i = 0; i < nfil; i++)
    {
        matris2[i] = new int [ncol];
    }

    cout<<endl<<"Dijite los elementos de la segunda matris: "<<endl;
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<"Dijite un numero ["<<i<<"]["<<j<<"]: ";
            cin>>*(*(matris2+i)+j);
        }
    }
}

void sumarmatris(int ** matris1, int ** matris2, int nfil, int ncol)
{
    for (int i = 0; i < nfil; i++)
    {
        for(int j=0;j<ncol;j++){
			*(*(matris1+i)+j) += *(*(matris2+i)+j);  
		}
    }
}

void mostrarmatrices(int **matris1,int nfil,int ncol)
{
    cout<<endl<<"La suma de las dos matrices es: "<<endl;
    for (int i = 0; i < nfil; i++)
    {
        for (int j = 0; j < ncol; j++)
        {
            cout<<*(*(matris1+i)+j)<<" ";
        }
        cout<<endl;
    }
}