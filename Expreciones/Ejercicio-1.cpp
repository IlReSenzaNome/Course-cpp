#include <stdio.h>

int main(){
    float a,b,Resultado = 0;
    printf("Ingresa el valor de a: "); scanf("%f",&a);
    printf("Ingresa el valor de b: "); scanf("%f",&b);
    Resultado = (a/b) + 1;
    printf("El resultado es: %.2f",Resultado);
    return 0;
}