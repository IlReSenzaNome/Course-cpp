#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void agregarpila(Nodo *&,int);
void sacarpila(Nodo *&,int &);

int main()
{
    Nodo *pila = NULL;
    int dato;
    char rpt;

    do
    {
        cout<<"Dijite un dato: ";
        cin>>dato;
        agregarpila(pila,dato);
        cout<<"Desea agregar un nuevo lemento a pila(s/n): ";
        cin>>rpt;
    } while ((rpt == 'S') || (rpt == 's'));
    
    cout<<endl<<"Sacando los elementos de la pila: "<<endl;
    while (pila != NULL)
    {
        sacarpila(pila,dato);
        if (pila != NULL)
        {
            cout<<dato<<" , ";
        }
        else
        {
            cout<<dato<<" . ";
        }
    }
    

    getch();
    return 0;
}

void agregarpila(Nodo *&pila,int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo; 

    cout<<endl<<"El elemento "<<n<<" agregado a la pila correctamente."<<endl;
}

void sacarpila(Nodo *&pila,int &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}
