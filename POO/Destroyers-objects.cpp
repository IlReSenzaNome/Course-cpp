#include <iostream>
#include <conio.h>

using namespace std;

class Perro
{
private:
    string nombre, raza;

public:
    Perro(string, string);
    ~Perro();
    void mostrarDatos();
    void jugar();
};

Perro::Perro(string _nombre, string _raza)
{
    nombre = _nombre;
    raza = _raza;
}

Perro::~Perro()
{
}

void Perro::mostrarDatos()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Raza: " << raza << endl;
}

void Perro::jugar()
{
    cout << "El perro " << nombre << " esta jugando" << endl;
}

int main(int argc, char const *argv[])
{
    Perro perro1("salazar", "golden");

    perro1.mostrarDatos();
    perro1.jugar();
    perro1.~Perro();

    getch();
    return 0;
}
