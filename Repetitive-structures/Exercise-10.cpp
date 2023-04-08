#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,factorial = 1,sumadefactoriales = 0;

    printf("Ingrese un numero: "); scanf("%d",&numero);

    for (int i = 1; i <= numero; i++){
        factorial *= i;
        sumadefactoriales += factorial;
    }
    
    printf("\nEl suma del factorial es: %d\n",sumadefactoriales);

    system("pause");
    return 0;
}