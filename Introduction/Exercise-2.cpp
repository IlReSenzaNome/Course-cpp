#include <stdio.h>

int main(){
    float precio,precioFinal,iva;

    printf("Ingresa el precio del producto: "); scanf("%f",&precio);
    iva = precio * 0.12;
    precioFinal = iva + precio;
    printf("\nEl precio final es: %f", precioFinal);

    return 0;
}