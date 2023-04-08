#include <stdio.h>

int main(){
    char letra;
    printf("Ingrese una letra: "); scanf("%c",&letra);
    switch (letra)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Es una vocal minuscula");
        break;
    
    default:
        printf("No es una vocal minuscula");
        break;
    }
    
    return 0;
}