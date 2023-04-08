#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
    int numeros[100],n,mayor = 0;

    cout<<"Digite el numero de elementos del vector: "; cin>>n;
    
    for (int i = 0; i < n; i++){
         printf("Digite un numero: "); 
         scanf("%d",&numeros[i]);

         if (numeros[i] > mayor){
            mayor = numeros[i];
         }
    }

    printf("El mayor valor del arreglo es: %d",mayor);    
    
    getch();
    return 0;
}
