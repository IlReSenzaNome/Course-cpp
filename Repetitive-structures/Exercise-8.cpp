#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1,suma = 0;

    printf("Ingrese un numero de elementos: "); scanf("%d",&n1);

    for (int i = 0; i <= 2*n1-1; i+=2){
        suma += i;
    }
    
    printf("\nEl resultado de la suma es: %d\n",suma);

    system("pause");
    return 0;
}