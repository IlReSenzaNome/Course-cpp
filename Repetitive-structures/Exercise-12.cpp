#include <stdio.h>
#include <conio.h>

int main(){
    int n,suma = 0,par = 0, impar = 0,negativo = 0;

    printf("Digite el de elementos+: "); scanf("%d",&n);
    
    for (int i = 1; i <= n; i++){
        if(i%2==0){
			negativo = i * -1; 
			par += negativo;			
		}
		else{ 
			impar += i;
		}
    }
    
    suma = par + impar;

    printf("\nEl resultado de la suma es: %d\n", suma);

    getch();
    return 0;
}
