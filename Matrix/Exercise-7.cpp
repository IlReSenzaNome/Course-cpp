#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int matris1[100][100],filas,colubnas;
    char band = 'F';

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de colubnas: "; cin>>colubnas;

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < colubnas; j++){
           cout<<"Digite un numero: ("<<i<<")("<<j<<"): ";
           cin>>matris1[i][j];
        }
    }

    if (filas == colubnas){
        for (int i = 0; i < filas; i++){
        for (int j = 0; j < colubnas; j++){
           if (matris1[i][j] == matris1[j][i]){
            band = 'V';
           }
           
        }
        }
    }

    if (band == 'V'){
        cout<<"La matris es simetrica";
    }
    else{
        cout<<"La matris no es simetrica";
    }
    
    getch();
    return 0;
}