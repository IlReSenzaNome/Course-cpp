#include <stdio.h>

int main(){
    float a,b,c,d,Resultado = 0;
    printf("Ingrese el numero a: "); scanf("%f",&a);
    printf("Ingrese el numero b: "); scanf("%f",&b);
    printf("Ingrese el numero c: "); scanf("%f",&c);
    printf("Ingrese el numero d: "); scanf("%f",&d);
    Resultado = (a + b) / (c + d);
    printf("El resultado es: %.2f",Resultado);
    return 0;
}