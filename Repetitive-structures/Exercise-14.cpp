#include <stdio.h>
#include <stdlib.h>

int main(){
    int examen1,examen2,examen3;
    int aprobaron_todos_examenes=0,aprobaron_almenos_uno=0,aprobaron_ultimo=0;

    for(int i = 1; i<=5;i++){
    printf("%d.Ingrese la nota del primer examen: ",i); scanf("%d",&examen1);
    printf("%d.Ingrese la nota del segundo examen: ",i); scanf("%d",&examen2);
    printf("%d.Ingrese la nota del tercer examen: ",i); scanf("%d",&examen3);

    if ((examen1>10)&&(examen2>10)&&(examen3>10)){
        aprobaron_todos_examenes++;
    }
    if ((examen1>10)||(examen2>10)||(examen3>10)){
        aprobaron_almenos_uno++;
    }
    if ((examen1<10)&&(examen2<10)&&(examen3>10)){
        aprobaron_ultimo++;
    }
    }
    printf("\na| Aprobaron todos los examenes: %d",aprobaron_todos_examenes);
    printf("\nb| Aprobaron almenos un examen: %d",aprobaron_todos_examenes);
    printf("\nc| Aprobaron unicamente el ultimo examen: %d\n",aprobaron_todos_examenes);
    
    system("pause");
    return 0;
}
