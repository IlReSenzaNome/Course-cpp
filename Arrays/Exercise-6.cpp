#include <iostream>
#include <stdlib.h>

using namespace std; 

int main(){
    int numeros[]= {1,2,3,4,10};
    int suma = 0,mayor = 0;

    for (int i = 0; i < 5; i++){
        suma += numeros[i];
        if (numeros[i] > mayor){
           mayor = numeros[i];
        }
    }
    if (mayor == suma-mayor){
        cout<<"El numero %d"<<mayor<<" es la suma de los demas\n";
    }
    else{
        cout<<"No existe ningun numero que sea la suma de los demas";
    }
    
    system("pause");
    return 0;
}
