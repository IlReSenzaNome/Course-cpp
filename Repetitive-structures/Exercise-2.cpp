#include <stdio.h>
#include <conio.h>

int main(){
    int numero,conteo = 0;

    do{
        printf("Ingrese un numero: "); scanf("%d",&numero);
        if (numero > 0){
            conteo ++;
        }
    } while (numero != 0);

    printf("\nEl total de numeros mayores que 0 es: %d",conteo);

    getch();
    return 0;
}
