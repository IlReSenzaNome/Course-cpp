#include <stdio.h>

int main(){
    float nota1, nota2, nota3;
	int notaFinalMedia;

    printf("Ingrese nota1: "); scanf("%f",&nota1);
    printf("Ingrese nota2: "); scanf("%f",&nota2);
    printf("Ingrese nota3: "); scanf("%f",&nota3);

    notaFinalMedia = (nota1+nota2+nota3)/3;

    printf("la final media es: %d",notaFinalMedia);

    return 0;
}