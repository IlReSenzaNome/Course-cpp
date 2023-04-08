#include <stdio.h>

int main(){
    int n1,n2,suma = 0,resta = 0,multiplicacion = 0,division = 0;
    printf("Ingresa un numero: "); scanf("%d",&n1);
    printf("Ingresa un segundo numero: "); scanf("%d",&n2);
    
    suma = n1 + n2; 
    resta = n1 - n2; 
    multiplicacion = n1 * n2;  
    division = n1 / n2;
    printf("\nLa suma es: %d",suma);   
    printf("\nLa resta es: %d",resta);   
    printf("\nLa multiplicaion es: %d",multiplicacion);
    printf("\nLa Division es: %d",division);
    return 0;
}