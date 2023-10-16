#include <iostream>
#include <conio.h>

using namespace std;

class Tiempo
{
private:
    int horas, minutos, segundo;

public:
    Tiempo(int, int, int);
    Tiempo(long);
    void mostrarhora();
};

Tiempo::Tiempo(int _horas, int _minutos, int _segundos)
{
    horas = _horas;
    minutos = _minutos;
    segundo = _segundos;
}

Tiempo::Tiempo(long segundost)
{
    horas = int(segundost / 3600);
    segundost %= 3600;
    minutos = int(segundost / 60);
    segundo = segundost % 60;
}

void Tiempo::mostrarhora()
{
    cout << "la Hora es: " << horas << " : " << minutos << " : " << segundo << endl;
}

int main(int argc, char const *argv[])
{
    Tiempo hora(11, 23, 40);
    hora.mostrarhora();
    Tiempo pasado(55400);
    pasado.mostrarhora();

    getch();
    return 0;
}
