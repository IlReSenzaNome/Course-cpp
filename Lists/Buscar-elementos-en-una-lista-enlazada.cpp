#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *siguiente;
};

void menu();
void insertarlista(Nodo *&, int);
void mostrarlista(Nodo *);
void buscarlista(Nodo *, int);

int main()
{

    menu();

    getch();
    return 0;
}

void menu()
{
    Nodo *lista = NULL;
    int opcion, dato;

    do
    {
        cout << "\t..MENU..\t" << endl;
        cout << "\t..1. Insertar elementos a la lista: " << endl;
        cout << "\t..2. Mostrar los elementos de la lista: " << endl;
        cout << "\t..3. Salir: " << endl;
        cout << "Opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            do
            {
                cout << "Ingrese un dato: ";
                cin >> dato;
                insertarlista(lista, dato);
            } while (dato != 0);
            system("pause");
            break;
        case 2:
            mostrarlista(lista);
            system("pause");
            break;
        case 3:
            cout << "Adios";
            break;
        default:
            cout << "Opcion no existente intentalo denuevo";
            break;
        }
        system("cls");
    } while (opcion != 3);
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

void buscarlista(Nodo *lista, int n)
{
    bool band = false;

    Nodo *actual = new Nodo();
    actual = lista;
    while ((actual != NULL) && (actual->dato <= n))
    {
        if (actual->dato == n)
        {
            band = true;
        }
        actual = actual->siguiente;
    }

    if (band)
    {
        cout << "Elemento " << n << " Si a sido encontrado en lsita" << endl;
    }
    else
    {
        cout << "Elemento " << n << " No a sido encontrado en lsita" << endl;
    }
}