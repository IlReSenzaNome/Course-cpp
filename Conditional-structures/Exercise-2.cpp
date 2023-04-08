#include <stdio.h>

int main(){
    int n1,n2,n3;

    printf("Ingrese 3 numeros: "); scanf("%d %d %d",&n1,&n2,&n3);
    if ((n1 > n2) && (n1 > n3))
    {
        printf("El numero mayor es: %d",n1);
    }
    else if ((n2 > n3) && (n2 > n3))
    {
        printf("El numero mayor es: %d",n2);
    }
    else{
        printf("El numero mayor es: %d",n3);
    }

    return 0;
}