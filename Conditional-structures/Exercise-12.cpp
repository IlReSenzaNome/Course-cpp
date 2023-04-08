#include <stdio.h>
#include <math.h>

int main(){
    int opc,n1,n2,cubo = 0;
    printf("\t Uso de numeros \n");
    printf("1. Cubo de un numero \n");
    printf("2. Numero par o impar \n");
    printf("3. Salir \n");
    printf("Opcion: ");
    scanf("%d",&opc);

    switch (opc){
    case 1:
        printf("Ingrese un numero: "); scanf("%d",&n1);
        cubo = pow(n1,3);
        printf("El cubo del numero es: %d",cubo);
        break;
    case 2:
        printf("Ingrese un numero: "); scanf("%d",&n2);
        if (n1 == 0){
        printf("El numero es cero");
        }
        else if (n2%2 == 0){
            printf("El numero es par");
        }
        else{
            printf("El numero es impar");
        }
        break;
    case 3:
        break;
    }

    return 0;
}