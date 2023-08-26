#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    int dato;
    Nodo *izq;
    Nodo *der;
    Nodo *padre;
};

void menu();
Nodo *crearnodo(int, Nodo *);
void insertarNodo(Nodo *&, int, Nodo *);
void mostrarArbol(Nodo *, int);
bool busqueda(Nodo *, int);
void preOrden(Nodo *);
void inOrden(Nodo *);
void postOrden(Nodo *);
void eliminarNodo(Nodo *, int);
void eliminar(Nodo *);
Nodo *minimo(Nodo *);
void remplazar(Nodo *, Nodo *);
void destruir(Nodo *);

int main(int argc, char const *argv[])
{
    menu();

    getch();
    return 0;
}

void menu()
{
    Nodo *arbol = NULL;
    int option, dato, contador = 0;
    do
    {
        cout << "\t..MENU.." << endl;
        cout << "\t..1. Insertar datos en el arbol: " << endl;
        cout << "\t..2. Imprimir arbol: " << endl;
        cout << "\t..3. Buscar un elemento: " << endl;
        cout << "\t..4. Recorrer el arbol en preordern: " << endl;
        cout << "\t..5. Recorrer el arbol en inordern: " << endl;
        cout << "\t..6. Recorrer el arbol en postordern: " << endl;
        cout << "\t..7. Eliminar un elemento del arbol: " << endl;
        cout << "\t..8. Salir: " << endl;
        cout << "\t..Selecciones una opcion: ";
        cin >> option;
        switch (option)
        {
        case 1:
            cout << "Dijite un numero: ";
            cin >> dato;
            insertarNodo(arbol, dato, NULL);
            system("pause");
            break;
        case 2:
            cout << "Imprimir arbol completo " << endl;
            mostrarArbol(arbol, contador);
            cout << endl;
            system("pause");
            break;
        case 3:
            cout << "Dijite el elemento a buscar: ";
            cin >> dato;
            if (busqueda(arbol, dato) == true)
            {
                cout << "El elemento " << dato << " Existe dentro del arbol" << endl;
            }
            else
            {
                cout << "El elemento no existe dentro del arbol" << endl;
            }
            system("pause");
            break;
        case 4:
            cout << "Recorrer elementos en preOrden: ";
            preOrden(arbol);
            cout << endl;
            system("pause");
            break;
        case 5:
            cout << "Recorrer elementos en inOrden: ";
            inOrden(arbol);
            cout << endl;
            system("pause");
            break;
        case 6:
            cout << "Recorrer elementos en postOrden: ";
            postOrden(arbol);
            cout << endl;
            system("pause");
            break;
        case 7:
            cout << "Dijite el elemento a eliminar: ";
            cin >> dato;
            eliminarNodo(arbol, dato);
            cout << endl;
            system("pause");
            break;
        case 8:
            cout << "Adios";
            getch();
            break;
        default:
            cout << "Opcion no existe";
            break;
        }
        system("cls");
    } while (option != 8);
}

Nodo *crearnodo(int n, Nodo *padre)
{
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n;
    nuevo_nodo->izq = NULL;
    nuevo_nodo->der = NULL;
    nuevo_nodo->padre = padre;

    return nuevo_nodo;
}

void insertarNodo(Nodo *&arbol, int n, Nodo *padre)
{
    if (arbol == NULL)
    {
        Nodo *nuevo_nodo = crearnodo(n, padre);
        arbol = nuevo_nodo;
    }
    else
    {
        int valorRaiz = arbol->dato;
        if (n < valorRaiz)
        {
            insertarNodo(arbol->izq, n, arbol);
        }
        else
        {
            insertarNodo(arbol->der, n, arbol);
        }
    }
}

void mostrarArbol(Nodo *arbol, int nivel)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        mostrarArbol(arbol->der, nivel + 1);

        for (int i = 0; i < nivel; i++)
        {
            cout << "   ";
        }
        cout << "|-- " << arbol->dato << endl;

        mostrarArbol(arbol->izq, nivel + 1);
    }
}

bool busqueda(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return false;
    }
    else if (arbol->dato == n)
    {
        return true;
    }
    else if (n < arbol->dato)
    {
        return busqueda(arbol->izq, n);
    }
    else
    {
        return busqueda(arbol->der, n);
    }
}

void preOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        cout << arbol->dato << " - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}

void inOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        inOrden(arbol->izq);
        cout << arbol->dato << " - ";
        inOrden(arbol->der);
    }
}

void postOrden(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return;
    }
    else
    {
        postOrden(arbol->izq);
        postOrden(arbol->der);
        cout << arbol->dato << " - ";
    }
}

void eliminarNodo(Nodo *arbol, int n)
{
    if (arbol == NULL)
    {
        return;
    }
    else if (n < arbol->dato)
    {
        eliminarNodo(arbol->izq, n);
    }
    else if (n > arbol->dato)
    {
        eliminarNodo(arbol->der, n);
    }
    else
    {
        eliminar(arbol);
    }
}

Nodo *minimo(Nodo *arbol)
{
    if (arbol == NULL)
    {
        return NULL;
    }
    if (arbol->izq)
    {
        return minimo(arbol->izq);
    }
    else
    {
        return arbol;
    }
}

void remplazar(Nodo *arbol, Nodo *nuevonodo)
{
    if (arbol->padre)
    {
        if (arbol->dato == arbol->padre->izq->dato)
        {
            arbol->padre->izq = nuevonodo;
        }
        else if (arbol->dato == arbol->padre->der->dato)
        {
            arbol->padre->der = nuevonodo;
        }
    }
    if (nuevonodo)
    {
        nuevonodo->padre = arbol->padre;
    }
}

void destruir(Nodo *nodo)
{
    nodo->izq = NULL;
    nodo->der = NULL;
    delete nodo;
}

void eliminar(Nodo *nodoeliminar)
{
    if (nodoeliminar->izq && nodoeliminar->der)
    {
        Nodo *menor = minimo(nodoeliminar->der);
        nodoeliminar->dato = menor->dato;
        eliminar(menor);
    }
    else if (nodoeliminar->izq)
    {
        remplazar(nodoeliminar, nodoeliminar->izq);
        destruir(nodoeliminar);
    }
    else if (nodoeliminar->der)
    {
        remplazar(nodoeliminar, nodoeliminar->der);
        destruir(nodoeliminar);
    }
    else
    {
        remplazar(nodoeliminar, NULL);
        destruir(nodoeliminar);
    }
}
