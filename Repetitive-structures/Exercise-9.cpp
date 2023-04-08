#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,factorial = 1;

    printf("Ingrese un numero: "); scanf("%d",&numero);

    for (int i = 1; i <= numero; i++){
        factorial *= i;
    }
    
    printf("\nEl factorial es: %d",numero);

    system("pause");
    return 0;
}