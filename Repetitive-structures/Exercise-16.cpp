#include <stdio.h>
#include <stdlib.h>

int main(){
    int numero;

    printf("Digite un numero: "); scanf("%d",&numero);
    printf("\nDescomponiendo en factores primos: ");
    for(int i=2;numero>1;i++){
		while(numero%i==0){
			 printf("\n%d",i);
			numero /= i;
		}
	}

    printf("\n");
    system("pause");
    return 0;
}
