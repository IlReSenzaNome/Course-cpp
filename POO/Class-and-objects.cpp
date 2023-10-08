#include <iostream>
#include <conio.h>

using namespace std;

class Persona
{
private:
    int edad;
    string nombre;

public:
    Persona(int, string);
    void leer();
    void correr();
};

Persona::Persona(int _edad, string _nombre)
{
    edad = _edad;
    nombre = _nombre;
}

void Persona::leer()
{
    cout << "soy " << nombre << " y estoy leyendo" << endl;
}

void Persona::correr()
{
    cout << "soy " << nombre << " y estoy corriendo a mis " << edad << endl;
}

int main(int argc, char const *argv[])
{
    Persona p1 = Persona(10, "Juan");
    p1.leer();
    p1.correr();

    Persona p2(20, "Pedro");
    p2.leer();
    p2.correr();

    Persona p3(30, "Maria");
    p3.correr();
    p3.leer();
    getch();
    return 0;
}
