#include <stdio.h>

int main(){
    float a,b,c,d,Resultado = 0;
    printf("Ingres el valor de a: "); scanf("%f",&a);
    printf("Ingres el valor de b: "); scanf("%f",&b);
    printf("Ingres el valor de c: "); scanf("%f",&c);
    printf("Ingres el valor de d: "); scanf("%f",&d);
    Resultado = a + (b/(c - d));
    printf("El resultado es: %f",Resultado);
    return 0;
}