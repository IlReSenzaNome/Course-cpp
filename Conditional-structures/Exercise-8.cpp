#include <stdio.h>

int main(){
    int n1,n2,n3,n4;

    printf("Ingrese tres numeros: "); scanf("%d %d %d", &n1, &n2, &n3);
    printf("Ingrese un numero: "); scanf("%d",&n4);

    if ((n1 == n4) || (n2 == n4) || (n3 == n4))
    {
        printf("El numero conincide con uno de los anteriores");
    }
    else{
        printf("El numero no conincide con uno de los anteriores");
    }

    return 0;
}
