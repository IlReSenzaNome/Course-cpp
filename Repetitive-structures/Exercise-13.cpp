#include <stdio.h>
#include <stdlib.h>

int main(){
    int n,x=0,y=1,z=1;

    printf("Ingrese el numero de elementos: "); scanf("%d",&n);

    for (int i = 1; i <= n; i++){
        z = x + y;
        printf("%d\n",z);
        x = y;
        y = z;
    }
    

    system("pause");
    return 0;
}