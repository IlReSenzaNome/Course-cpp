#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero,multiplicacion;

    do{
        printf("Digite un numero: "); scanf("%d",&numero);
    } while ((numero < 1) || (numero > 10));

    for (int i = 1; i <= 20; i++)
    {
        multiplicacion = numero * i;
        printf("%d x %d = %d\n",numero,i,multiplicacion);
    }
    
    printf("\n");
    system("pause");
    return 0;
}
