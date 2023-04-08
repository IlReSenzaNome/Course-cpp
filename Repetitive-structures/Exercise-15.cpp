#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numero,dato,contador = 0;

    srand(time(NULL));
    dato = 1 + rand()%(100);

    do{
        printf("Ingrese un numero: "); scanf("%d",&numero);

        if (numero > dato){
            printf("\nDijite un numero menor\n");
        }
        if (numero < dato){
            printf("\nDijite un numero mayor\n");
        }
        contador++;
    } while (numero != dato);
    
    printf("\nFelucudades adivinaste el numero\n");
    printf("El numero de intentos fue: %d\n",contador);

    system("pause");
    return 0;
}
