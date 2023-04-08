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
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("Es una vocal mayuscula");
        break;
    default:
        printf("No es una vocal");
        break;
    }
    
    return 0;
}