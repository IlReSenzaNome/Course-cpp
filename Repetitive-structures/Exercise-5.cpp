#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,suma = 0;

    do{
        printf("Ingrese un numero: "); scanf("%d",&numero);
        if (numero > 0){
            suma += numero;
        }
        
    } while ((numero < 20) || (numero > 30) && (numero != 0));
    
    printf("\nLa suma es: %d\n",suma);    

    system("pause");
    return 0;
}