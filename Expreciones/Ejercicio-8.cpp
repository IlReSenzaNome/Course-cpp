#include <stdio.h>
#include<math.h>

int main(){
    float cateto1,cateto2,hipotenusa;
    printf("Ingrese el primer cateto: "); scanf("%f",&cateto1);
    printf("Ingrese el segundo cateto: "); scanf("%f",&cateto2);
    hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

    printf("\n El resultado es: %f",hipotenusa);    

    return 0;
}