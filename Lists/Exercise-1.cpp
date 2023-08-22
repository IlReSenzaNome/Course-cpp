#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void insertarlista(Nodo *&, int);
void mostrarlista(Nodo *);
void mayormenorelemento(Nodo *);

int main(int argc, char const *argv[])
{
    Nodo *lista = NULL;
    int dato;
    char opcion;
    do
    {
        cout << "Dijite un numero: ";
        cin >> dato;
        insertarlista(lista, dato);
        cout << "Desea agregar otro nodo(s/n): ";
        cin >> opcion;
    } while ((opcion == 's') || (opcion == 'S'));

    cout << endl;
    cout << "Elementos de la lista: " << endl;
    mostrarlista(lista);

    cout << endl;
    cout << "Mayor y Menor elemento: " << endl;
    mayormenorelemento(lista);

    getch();
    return 0;
}

void insertarlista(Nodo *&lista, int n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;

    Nodo *aux1 = lista;
    Nodo *aux2;

    while ((aux1 != NULL) && (aux1->dato < n))
    {
        aux2 = aux1;
        aux1 = aux1->siguiente;
    }

    if (lista == aux1)
    {
        lista = nuevo_nodo;
    }
    else
    {
        aux2->siguiente = nuevo_nodo;
    }

    nuevo_nodo->siguiente = aux1;
    cout << "El elemento " << n << " fue ingresado corectamente " << endl;
}

void mostrarlista(Nodo *lista)
{
    Nodo *actual = new Nodo();

    actual = lista;
    while (actual != NULL)
    {
        cout << actual->dato << " -> ";
        actual = actual->siguiente;
    }
}

void mayormenorelemento(Nodo *lista)
{
    int menor = 999999, mayor = -9999999;
    while (lista != NULL)
    {
        if ((lista->dato) > mayor)
        {
            mayor = lista->dato;
        }
        if ((lista->dato) < menor)
        {
            menor = lista->dato;
        }
        lista = lista->siguiente;
    }
    cout << "\nEl elemento mayor de la lista es: " << mayor << " Y el menor elemento es: " << menor << endl;
}