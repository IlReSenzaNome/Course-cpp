#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int numero = 20,*dir_numero;

    dir_numero = &numero;

    cout<<"Numero: "<<*dir_numero<<endl;
    cout<<"Direccion de memoria: "<<dir_numero<<endl;

    getch();
    return 0;
}
