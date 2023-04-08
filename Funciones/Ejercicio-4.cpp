#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
float parteF(float n);

float numero;

int main(){

    pedirdatos();
    cout<<"La parte fraccionaria del numero es: "<<parteF(numero)<<endl;

    getch();
    return 0;
}

void pedirdatos(){
    cout<<"Digite un numero: ";
    cin>>numero;
}

float parteF(float n){
    int entero = n;
    float resultado = n - entero; 
    return resultado;
}
