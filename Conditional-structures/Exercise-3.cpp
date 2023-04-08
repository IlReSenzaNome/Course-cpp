#include <stdio.h>

int main(){
    int n1;
    printf("Digite un numero: "); scanf("%d",&n1);

    if (n1 == 0){
        printf("El numero es cero");
    }
    else if (n1%2 == 0){
        printf("El numero es par");
    }
    else{
        printf("El numero es impar");
    }
    return 0;
}