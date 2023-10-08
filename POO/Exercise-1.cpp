#include <iostream>
#include <conio.h>

using namespace std;

class Rectangulo
{
private:
    float largo, ancho;

public:
    Rectangulo(float, float);
    void Perimetro();
    void Araa();
};

Rectangulo::Rectangulo(float l, float a)
{
    largo = l;
    ancho = a;
}

void Rectangulo::Perimetro()
{
    float perimetro = 0;
    perimetro = (largo + ancho) * 2;
    cout << "El perimetro es: " << perimetro << endl;
}

void Rectangulo::Araa()
{
    float area = 0;
    area = largo * ancho;
    cout << "El area es: " << area << endl;
}

int main(int argc, char const *argv[])
{
    Rectangulo t1(11, 7);
    t1.Perimetro();
    t1.Araa();

    getch();
    return 0;
}
