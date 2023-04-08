#include <iostream>
#include <conio.h>

using namespace std; 

void prdirdatos();
void funpot(int x,int y);

int numero,potencia;

int main(){

    prdirdatos();
    funpot(numero,potencia);

    getch();
    return 0;
}

void prdirdatos(){
    cout<<"Digite un numero: ";
    cin>>numero;
    cout<<"Dijite el exponente de elevacion: ";
    cin>>potencia;
}

void funpot(int x,int y){
    long resultado = 1;
    for (int i = 1; i <= y; i++){
        resultado *= x;
    }
    
    cout<<"El resultado es: "<<resultado<<endl;
}
