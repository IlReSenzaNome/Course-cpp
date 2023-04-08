#include <stdio.h>
#include <conio.h>

int main(){
    int x,y,elevacion = 1;

    printf("Ingrese el valor de x: "); scanf("%d",&x);
    printf("Ingrese el valor de y: "); scanf("%d",&y);

    for (int i = 1; i <= y; i++){
        elevacion *= x;
    }

    printf("\nEl resultado de la elevacion es: %d",elevacion);
    
    getch();
    return 0;
}