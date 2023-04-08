#include <stdio.h>
#include <math.h>

int main(){
    float x,y,Resultado = 0;
    printf("Ingrese el bvalor de x: "); scanf("%f",&x);
    printf("Ingrese el bvalor de y: "); scanf("%f",&y);

    Resultado = (sqrt(x))/(pow(y,2)-1);

    printf("El resultado es: %f",Resultado);

    return 0;
}