#include <stdio.h>

int main(){
    float Practica,Teorica,Participacion,Notafinal = 0;

    printf("Ingrese la nota de Practiva: "); scanf("%f",&Practica);
    printf("Ingrese la nota Teorica: "); scanf("%f",&Teorica);
    printf("Ingrese la nota de Participacion: "); scanf("%f",&Participacion);

    Practica *= 0.30; // practica = practiva * 0.30
    Teorica *= 0.60;
    Participacion *= 0.10;

    Notafinal = Practica + Teorica + Participacion;

    printf("\nLa nota final es: %.1f",Notafinal);

    return 0;
}