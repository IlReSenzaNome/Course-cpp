#include <iostream>
#include <conio.h>

using namespace std; 

int main(){
    int numeros[5];
    int array[5];
    
    for (int i = 0; i < 5; i++){
       cout<<"digte 5 numeros: ";
       cin>>&numeros[i];
    }

    for (int i = 0; i < 5; i++){
        array[i] = numeros[i] * 2;
    }
    
    cout<<"\nnumeros multiplicados por 2"<<endl;

    for (int i = 0; i < 5; i++){
        cout<<array[i]<<endl;
    }
    
    getch();
    return 0;
}
