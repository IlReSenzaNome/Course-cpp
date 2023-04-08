#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {1,4,2,3,5};
    int aux,min;

    for (int i = 0; i < 5; i++){
        min = i;
        for (int j = i+1; j < 5; j++){
            if (numeros[j] < numeros[min]){
                min = j;
            }
        }
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
    }
    
    cout<<"Orden Ascendente: ";
    for (int i = 0; i < 5; i++){
        cout<<numeros[i]<<" ";
    }
    
    cout<<"\nOrden Descendente: ";
    for (int i = 4; i >= 0; i--){
        cout<<numeros[i]<<" ";
    }
    
    getch();
    return 0;
}