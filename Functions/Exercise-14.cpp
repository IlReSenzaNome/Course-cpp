#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void impares(int vec[],int);


int vec[100],tam;

int main(){
    pedirdatos();
    impares(vec,tam);
   
    getch();
    return 0;
}

void pedirdatos(){
    cout<<"Dijite el tamño del vector: ";
    cin>>tam;
    for (int i = 0; i < tam; i++){
        cout<<i+1<<" .Dijite un numero: ";
        cin>>vec[i];
    }
}

void impares(int vec[],int tam){
    int vecImpares[100];
    int j = 0;
    
    for (int i = 0; i < tam; i++){
        if (vec[i] %2 != 0){
            vecImpares[j] = vec[i];
            j++;
        }
    }
    cout<<"Imprimiendo datos impaares: "<<endl;
    for (int i = 0; i < j; i++){
        cout<<vecImpares[i]<<" ";
    }
    
}
