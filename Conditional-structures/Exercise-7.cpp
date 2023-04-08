#include <stdio.h>

int main(){
    int edad;

    printf("Ingrese su edad: "); scanf("%d",&edad);
    
    if ((edad >= 18) && (edad <=25))
    {
        printf("Su edad esta en el rango de (18 a 25)");
    }
    else
    {
        printf("Su edad no esta en dicho rango");
    }

    return 0;
}
