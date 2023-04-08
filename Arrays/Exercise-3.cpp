#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
    int numeros[100],n;

    cout<<"Digite el numero de elementos del vector: "; cin>>n;

    for (int i = 0; i < n; i++){
         cout<<"Digite un numero: "; 
         cin>>&numeros[i];
    }
    
    for(int i = 0;i < n;i++){
     cout<<"El indice "<<i<<" tiene el numero: "<<numeros[i]; 
    }

    getch();
    return 0;
}
