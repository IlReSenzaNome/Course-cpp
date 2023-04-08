#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int numero,elevacion = 0,suma = 0;

    printf("Digite el numero de elementos a sumar: "); scanf("%d",&numero);

    for (int i = 1; i <= numero; i++){
        elevacion = pow(2,i);
        suma += elevacion;
    }
    
    printf("\nEl resultado de la suma es: %d\n",suma);

    system("pause");
    return 0;
}
