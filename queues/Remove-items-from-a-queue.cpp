#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarcola(Nodo *&,Nodo *&,int);
bool cola_vacia(Nodo *);
void suprimircola(Nodo *&,Nodo *&,int&);

int main()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int dato;

    cout<<"Dijite un numero: ";
    cin>>dato;
    insertarcola(frente,fin,dato);

    cout<<"Dijite un numero: ";
    cin>>dato;
    insertarcola(frente,fin,dato);

    cout<<"Dijite un numero: ";
    cin>>dato;
    insertarcola(frente,fin,dato);

    while (frente != NULL)
    {
        suprimircola(frente,fin,dato);
        if (frente != NULL)
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

void insertarcola(Nodo *& frente,Nodo *&fin,int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;
    if (cola_vacia(frente))
    {
        frente = nuevo_nodo;
    }
    else
    {
        fin->siguiente = nuevo_nodo;
    }
    fin = nuevo_nodo;
}

bool cola_vacia(Nodo *frente)
{
    return (frente == NULL)? true : false;
}

void suprimircola(Nodo *&frente,Nodo *&fin,int& n)
{
    n = frente->dato;
    Nodo *aux = frente;
    if (frente == fin)
    {
        frente = NULL;
        fin = NULL; 
    }
    else
    {
        frente = frente->siguiente;
    }
    delete aux;
}
