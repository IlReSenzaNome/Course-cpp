#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numero[] = {4,2,5,3,1};
    int aux;

    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            if (numero[j] > numero[j+1]){
                aux = numero[j];
                numero[j] = numero[j+1];
                numero[j+1] = aux;
            }
        }
    }

    cout<<"\nOrden Ascendente ";
    for(int i = 0;i < 5;i++){
        cout<<numero[i]<<" ";
    }

    cout<<"\nOrden Descendente ";
    for(int i = 4;i >= 0;i--){
        cout<<numero[i]<<" ";
    }

    getch();
    return 0;
}