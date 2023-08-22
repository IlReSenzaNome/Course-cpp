#include <iostream>
#include <conio.h>

using namespace std;

int sumavec(int vec[], int);
void Pedirdatos();

int vec[100],tam;

int main(){
    Pedirdatos();

    cout<<endl<<"El resultado de la suma es: "<<sumavec(vec,tam)<<endl;
    
    getch();
    return 0;
}

void Pedirdatos(){
    cout<<"Dijite el numero de elementos del arreglo: ";
    cin>>tam;
    for (int i = 0; i < tam; i++){
        cout<<i+1<<". Dijite un numero: ";
        cin>>vec[i];
    } 
}

int sumavec(int vec[], int tam){
    double suma = 0;
    for (int i = 0; i < tam; i++){
        suma += vec[i];
    }
    return suma;
}