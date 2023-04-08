#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main(){
    char cad[] = "123",cad1[] = "123.456";
    int numero;
    float numero1;

    numero = atoi(cad);
    numero1 = atof(cad1);

    cout<<numero<<endl;
    cout<<numero1<<endl;

    getch();
    return 0;
}