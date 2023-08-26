/*Ejercicio 4: Hacer un programa en C++. Para guardar numeros telefonicos que
muestre un menu con las siguientes opciones:

    1. Crear(nombre,apellidos,telefono)
    2. Agregar mas contactos(nombre,apellidos,telefono)
    3. Visualizar contactos existentes
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

struct Contacto
{
    string nombre, apellido, telefono;
} contacto;

void menu();
void write();
void addtext();
void read();

int main(int argc, char const *argv[])
{
    menu();
    getch();
    return 0;
}

void menu()
{
    int opcion;
    do
    {
        cout << "..........MENU..........\n";
        cout << "1. Crear(nombre,apellidos,telefono)\n";
        cout << "2. Agregar mas contactos(nombre,apellidos,telefono)\n";
        cout << "3. Visualizar contactos existentes\n";
        cout << "4. Salir\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;
        switch (opcion)
        {
        case 1:
            cout << "Creando...";
            write();
            cout << "Contacto creado" << endl;
            getch();
            break;
        case 2:
            cout << "Agregando..." << endl;
            addtext();
            cout << "Contacto agregado";
            getch();
            break;
        case 3:
            cout << "Visualizando..." << endl;
            read();
            cout << "Contacto visualizado";
            getch();
            break;
        case 4:
            cout << "Saliendo...";
            break;
        }
        system("cls");
    } while (opcion != 4);
}

void write()
{
    ofstream file;
    char option;
    file.open("contacts.txt", ios::out);
    if (file.fail())
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
    do
    {
        fflush(stdin);
        cout << "Ingrese el nombre: ";
        getline(cin, contacto.nombre);
        cout << "Ingrese el apellido: ";
        getline(cin, contacto.apellido);
        cout << "Ingrese el telefono: ";
        getline(cin, contacto.telefono);
        file << contacto.nombre << endl;
        file << contacto.apellido << endl;
        file << contacto.telefono << endl;
        cout << "Desea agregar otro contacto? (Y/N): ";
        cin >> option;
    } while ((option == 'Y') || (option == 'y'));

    file.close();
}

void addtext()
{
    ofstream file;
    char option;
    file.open("contacts.txt", ios::app);
    if (file.fail())
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
    cout << "Agregar nuevo contacto\n";
    do
    {
        fflush(stdin);
        cout << "Ingrese el nombre: ";
        getline(cin, contacto.nombre);
        cout << "Ingrese el apellido: ";
        getline(cin, contacto.apellido);
        cout << "Ingrese el telefono: ";
        getline(cin, contacto.telefono);
        file << contacto.nombre << endl;
        file << contacto.apellido << endl;
        file << contacto.telefono << endl;
        cout << "Desea agregar otro contacto? (Y/N): ";
        cin >> option;
    } while ((option == 'Y') || (option == 'y'));
    file.close();
}

void read()
{
    ifstream file;
    string text;
    file.open("contacts.txt", ios::in);
    if (file.fail())
    {
        cout << "Error al abrir el archivo";
        exit(1);
    }
    while (!file.eof())
    {
        getline(file, text);
        cout << text << endl;
    }
    file.close();
}