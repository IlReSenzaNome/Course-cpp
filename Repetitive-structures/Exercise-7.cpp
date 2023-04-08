#include <stdio.h>
#include <conio.h>

int main(){
    int n1,suma = 0;

    printf("Ingrese un numero de elementos: "); scanf("%d",&n1);

    for (int i = 0; i <= n1; i++){
        suma += i;
    }
    
    printf("\nEl resultado de la suma es: %d\n",suma);

    getch();
    return 0;
}
