#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOD>
void mostrarabs(TIPOD numero);

int main(){
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    mostrarabs(num1);
    mostrarabs(num2);
    mostrarabs(num3);

    getch();
    return 0;
}

template <class TIPOD>
void mostrarabs(TIPOD numero){
    if (numero < 0){
        numero *= -1; 
    }
    
    cout<<"El valor absoluto del numero es: "<<numero<<endl;

}