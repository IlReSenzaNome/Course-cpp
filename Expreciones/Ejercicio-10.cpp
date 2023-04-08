#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,Resultado1 = 0,Resultado2 = 0;

    printf("Ingrse el valor de a: "); scanf("%f",&a);
    printf("Ingrse el valor de b: "); scanf("%f",&b);
    printf("Ingrse el valor de c: "); scanf("%f",&c);

    Resultado1 = (-b-sqrt(pow(b,2)-4*a*c))/(2*a);
    Resultado2 = (-b+sqrt(pow(b,2)-4*a*c))/(2*a);

    printf("\nEl resultado es: %f",Resultado1);
    printf("\nEl resultado es: %f",Resultado2);

    return 0;
}