#include <stdio.h>

int main(){
    int numero, Dato = 5;
    printf("Ingrese un numero: "); scanf("%d",&numero);

    if (numero >= Dato)
    {
        printf("El numero es mayor o igual a 5");
    }
    else{
        printf("El numero es menor a 5");
    }    
    
    return 0;
}