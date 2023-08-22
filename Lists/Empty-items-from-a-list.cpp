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
void eliminarNodo(Nodo *&, int);
void eliminarlista(Nodo *&, int &);

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
        cout << "\t..3. Buscar un numero en la lista: " << endl;
        cout << "\t..4. Eleminar un nodo en la lista: " << endl;
        cout << "\t..5. Eliminar toda la lista: " << endl;
        cout << "\t..6. Salir: " << endl;
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
            cout << "Dijite el numero a buscar: ";
            cin >> dato;
            cout << endl;
            buscarlista(lista, dato);
            system("pause");
            break;
        case 4:
            cout << "Dijite el numero a eliminar: ";
            cin >> dato;
            cout << endl;
            eliminarNodo(lista, dato);
            system("pause");
            break;
        case 5:
            while (lista != NULL)
            {
                eliminarlista(lista, dato);
                cout << dato << " -> ";
            }
            system("pause");
            break;
        case 6:
            cout << "Adios";
            break;
        default:
            cout << "Opcion no existente intentalo denuevo";
            break;
        }
        system("cls");
    } while (opcion != 6);
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

void eliminarNodo(Nodo *&lista, int n)
{
    if (lista != NULL)
    {
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar = lista;

        while ((aux_borrar != NULL) && (aux_borrar->dato != n))
        {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }

        if (aux_borrar == NULL)
        {
            cout << "El elemneto no existe";
        }
        else if (anterior == NULL)
        {
            lista = lista->siguiente;
            delete aux_borrar;
        }
        else
        {
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}

void eliminarlista(Nodo *&lista, int &n)
{
    Nodo *aux = lista;
    n = aux->dato;
    lista = aux->siguiente;
    delete aux;
}