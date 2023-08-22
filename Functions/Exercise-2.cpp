#include <iostream>
#include <conio.h>

using namespace std;

void al_cuadrado(float n);
void Pedirdts();

float num;

int main(){

    Pedirdts();
    al_cuadrado(num);

    getch();
    return 0;
}

void Pedirdts(){
    cout<<"Ingresa un numero: ";
    cin>>num;
}

void al_cuadrado(float n){
    float cuadrado = 0;
    cuadrado = num * num;
    cout<<"El cuadrado del numero es: "<<cuadrado<<endl;
}