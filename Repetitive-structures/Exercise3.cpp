#include <stdio.h>
#include <conio.h>

int main(){
    int suma = 0,cuadrado;

    for (int i = 1; i <= 10; i++){
        cuadrado = i * i;
        suma += cuadrado;
    }
    printf("El resultado de la suma es: %d\n",suma);

    getch();
    return 0;
}