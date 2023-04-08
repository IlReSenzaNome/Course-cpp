#include <stdio.h>

int main(){
    int n1,n2;

    printf("Ingrese 2 numeros: "); scanf("%d %d",&n1,&n2);

    if (n1 == n2)
    {
        printf("Los numeris son iguakes");
    }
    else if (n1 > n2)
    {
        printf("El numero mayor es: %d",n1);
    }
    else{
        printf("El numero mayor es: %d",n2);
    }

    return 0;
}