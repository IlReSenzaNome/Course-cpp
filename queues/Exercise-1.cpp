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
void insertarcola(Nodo *&,Nodo *&,char);
bool cola_vacia(Nodo *);
void suprimircola(Nodo *&,Nodo *&,char&);

int main()
{   
    menu();    

    getch();
    return 0;
}

void menu()
{
    Nodo *frente = NULL;
    Nodo *fin = NULL;
    int option;
    char dato;
    do
    {
        cout<< "\tMENU"<<endl;
        cout<< "1.Insertar un carater a una cola."<<endl;
        cout<< "2.Mostrar todos los elemntos la cola."<<endl;
        cout<< "3.Salir"<<endl;
        cout<< "Seleccione una opcion: ";
        cin>>option;
        switch (option)
        {
        case 1:
            cout<< "Dijite un caarcter para agregar a la cola: ";
            cin>>dato;
            insertarcola(frente,fin,dato);
            break;
        case 2:
            cout<< "\nMostrando todos los elemntos de la cola: ";
            while (frente != NULL)
            {
                suprimircola(frente,fin,dato);
                if (frente != NULL)
                {
                    cout<<dato<<" , ";
                }
                else
                {
                    cout<<dato<<" . "<<endl;
                }
            }
            system("pause");
            break;
        case 3:
            break;
        }
        system("cls");
    } while (option != 3);
    
}
void insertarcola(Nodo *& frente,Nodo *&fin,char n)
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
void suprimircola(Nodo *&frente,Nodo *&fin,char& n)
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
