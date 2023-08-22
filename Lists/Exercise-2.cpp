#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    float dato;
    Nodo *siguiente;
};

void insertarlista(Nodo *&, int);
void mostrarlista(Nodo *);
void sumaypromedio(Nodo *);

int main(int argc, char const *argv[])
{
    Nodo *lista = NULL;
    float dato;
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
    cout << "Promedio de los numeros: " << endl;
    sumaypromedio(lista);

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

void sumaypromedio(Nodo *lista)
{
    float suma = 0, promedio = 0;
    int cantidad = 0;
    while (lista != NULL)
    {
        suma += lista->dato;
        cantidad++;
        lista = lista->siguiente;
    }
    promedio = suma / cantidad;

    cout << "La suma de todos los elementos es: " << suma << " Y su promedio: " << promedio;
}