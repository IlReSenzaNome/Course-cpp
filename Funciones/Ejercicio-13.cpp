#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void cambiarsigno(int vec[],int);
void mostrararreglo(int vec[],int);

int vec[100],tam;

int main(){
    pedirdatos();
    cambiarsigno(vec,tam);
    mostrararreglo(vec,tam);

    getch();
    return 0;
}

void pedirdatos(){
    cout<<"Dijite el tamaño del arreglo: ";
    cin>>tam;
    for (int i = 0; i < tam; i++){
        cout<<i+1<<" .Dijte el numero: ";
        cin>>vec[i];
    }
} 

void cambiarsigno(int vec[],int){
    for (int i = 0; i < tam; i++){
        vec[i] *= -1;
    }
}

void mostrararreglo(int vec[],int tam){
    cout<<"Cambiar de sinos: "<<endl;
    for(int i = 0; i < tam; i++){
        cout<<vec[i]<<endl;
    }
}