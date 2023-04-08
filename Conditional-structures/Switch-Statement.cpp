#include <stdio.h>

int main(){
    int numero;

    printf("Ingrese un numero del 1-5: "); scanf("%d",&numero);

    switch (numero)
    {
    case 1:
        printf("Es el numero 1");
        break;
    case 2:
        printf("Es el numero 2");
        break;
    case 3:
        printf("Es el numero 3");
        break;
    case 4:
        printf("Es el numero 4");
        break;
    case 5:
        printf("Es el numero 5");
        break;
    
    default:
        printf("No esta en el rango 1-5");
        break;
    }
    return 0;
}