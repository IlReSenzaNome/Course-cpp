#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>

using namespace std;

void escribir();

int main(int argc, char const *argv[])
{
    escribir();
    getch();
    return 0;
}

void escribir()
{
    ofstream archivo;
    string nombre, frase;

    cout << "Ingrese el nombre del archivo: ";
    getline(cin, nombre);

    archivo.open(nombre.c_str(), ios::out);
    if (archivo.fail())
    {
        cout << "No se pudo abrir el archivo" << endl;
        exit(1);
    }
    cout << "Ingrese una frase: ";
    getline(cin, frase);
    archivo << frase;
    archivo.close();
}