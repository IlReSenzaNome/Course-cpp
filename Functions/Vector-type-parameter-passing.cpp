#include <iostream>
#include <conio.h>

using namespace std;

void cuadrado(int vec[],int);
void mostrar(int vec[],int); 

int main() {
    const int TAM = 5;
    int vec[] = {1,2,3,4,5};

    cuadrado(vec,TAM);
    mostrar(vec,TAM);

    getch();
    return 0;
}

void cuadrado(int vec[],int TAM) {
    for (int i = 0; i < TAM; i++) {
        vec[i] *= vec[i];
    }
} 

void mostrar(int vec[],int TAM){
    for (int i = 0; i < TAM; i++){
        cout<<vec[i]<<" ";
    }
}