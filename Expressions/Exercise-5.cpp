#include <stdio.h>

int main(){
    int x,y,aux;
    printf("Digite el valor de a: "); scanf("%d",&x);
    printf("Digite el valor de b: "); scanf("%d",&y);

    aux = x;
    x = y;
    y = aux;

    printf("El nuevo valor de a es: %d",x);
    printf("\nEl nuevo valor de a es: %d",y);

    return 0;
}