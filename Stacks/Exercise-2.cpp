#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

struct Nodo
{
    char dato;
    Nodo *siguiente;
};

void menu();
void agregarpila(Nodo *&,char);
void sacarpila(Nodo *&,char &);

int main()
{
    menu();

    getch();
    return 0;
}

void menu()
{
    Nodo *pila = NULL;
    int opc;
    char dato;
    do
    {
        cout<<"\tMENU"<<endl;
        cout<<"1. Insertar un caracter a la pila. "<<endl;
        cout<<"2. Mostrar todos los elementos de la pila. "<<endl;
        cout<<"3. Salir. "<<endl;
        cout<<"opcion: ";
        cin>>opc;
        switch (opc)
        {
        case 1:
            cout<<"dijite un caracter: ";
            cin>>dato;
            agregarpila(pila,dato);
            break;
        case 2:
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
                system("pause");
            }
            break;
        case 3:
            break;
        }
        system("cls");
    } while (opc != 3);
    
}

void agregarpila(Nodo *&pila,char n)
{
    Nodo *nuevo_nodo = new Nodo();
    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = pila;
    pila = nuevo_nodo; 

    cout<<endl<<"El elemento "<<n<<" agregado a la pila correctamente."<<endl;
}

void sacarpila(Nodo *&pila,char &n)
{
    Nodo *aux = pila;
    n = aux->dato;
    pila = aux->siguiente;
    delete aux;
}