#include <stdio.h>

int main(){
    float a,b,c,d,e,f,Resultado = 0;
    printf("Ingrese el valor de a: "); scanf("%f",&a);
    printf("Ingrese el valor de b: "); scanf("%f",&b);
    printf("Ingrese el valor de c: "); scanf("%f",&c);
    printf("Ingrese el valor de d: "); scanf("%f",&d);
    printf("Ingrese el valor de e: "); scanf("%f",&e);
    printf("Ingrese el valor de f: "); scanf("%f",&f);
    Resultado = (a+(b/c)) / (d+(c/f));
    printf("El resultado es: %.2f",Resultado);


    return 0;
}