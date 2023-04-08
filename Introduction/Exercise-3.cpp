#include <stdio.h>

int main(){
    int Edad;
    char Sexo[10];
    float Altura;

    printf("Ingrese su edad: "); scanf("%d",&Edad);
    printf("Ingrese su sexo: "); scanf("%s",&Sexo);
    printf("Ingrese su Altura: "); scanf("%f",&Altura);

    printf("\n Edad: %d ",Edad);
    printf("\n Sexo: %s ",Sexo);
    printf("\n Altura: %f ",Altura);

    return 0;
}