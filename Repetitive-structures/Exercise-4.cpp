#include <stdio.h>
#include <conio.h>

int main(){
    float temperatura,suma_temperatura=0,temperatura_media;
	float temperatura_alta=0,temperatura_baja=999;

    for(int i=0;i<24;i+=4){
        printf("Digite la temperatura a las %d: ",i); scanf("%f",&temperatura);
        suma_temperatura += temperatura;
		
		if(temperatura > temperatura_alta){
			temperatura_alta = temperatura;
		}
		if(temperatura < temperatura_baja){
			temperatura_baja = temperatura;
		}
    }
    temperatura_media = suma_temperatura / 6;

    printf("\nLa temperatura media del dia es: %f\n",temperatura_media);
    printf("La temperatura mas baja es: %f\n",temperatura_baja);
    printf("La temperatura alta es: %f\n",temperatura_alta);

    getch();
    return 0;
}