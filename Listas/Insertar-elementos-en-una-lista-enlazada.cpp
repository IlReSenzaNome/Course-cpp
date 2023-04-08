#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo {
    int dato;
    Nodo *siguiente;
};

void insertarlista(Nodo *&, int);

int main()
{
    Nodo *lista = NULL;
    int dato;
    do
    {
        cout<<"Ingrese un dato: ";
        cin>>dato;
        insertarlista(lista, dato);
    } while (dato != 0);
    
    getch();
    return 0;
}

void insertarlista(Nodo *&lista,int n) {
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    Nodo *aux1 = lista;
    Nodo *aux2;

    while ((aux1!= NULL) && (aux2->dato < n)) {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1) {
        lista = nuevo_nodo;
    } else {
        aux2->siguiente = nuevo_nodo;
    }
    nuevo_nodo->siguiente = aux1;
    cout<<endl<<"El elemento "<<n<<" fue ingresado corectamente "<<endl<<endl;
}