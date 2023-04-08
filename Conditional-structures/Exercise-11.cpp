#include <stdio.h>

int main(){
    int SaldoInicial = 1000,opc;
    float extra,saldo = 0,retiro;

    printf("\t Bienvenido a su cajero virtual\n");
    printf("1. Ingresar dinero en cuenta \n");
    printf("2. Retirar dinero de la cuenta \n");
    printf("3. Salir \n");
    printf("Opcion: ");
    scanf("%d",&opc);

    switch (opc){
    case 1:
        printf("Digite la cantidad de dinero a ingresar: "); scanf("%F",&extra);
        saldo = SaldoInicial + extra;
        printf("Su saldo es: %.2f",saldo);
        break;
    case 2:
        printf("Digite la cantidad de dinero que va a retirar: "); scanf("%f",&retiro);

        if (retiro > SaldoInicial){
            printf("No tiene esa cantidad de dimero: ");
        }
        else{
            saldo = SaldoInicial - retiro;
            printf("El saldo en su cuenta es: %.2f",saldo);
        }
        break;
    case 3:
         break;
    }

    return 0;
}
