#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int matris1[100][100],dato = 0;
    int matris2[100][100],filas,colubnas;
    

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de colubnas: "; cin>>colubnas;

    srand(time(NULL));

    for (int i = 0; i < filas; i++){
        for (int j = 0; j < colubnas; j++){
            dato = 1+rand()%(100);
            matris1[i][j] = dato;
        }
    }
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < colubnas; j++){
            matris2[i][j] = matris1[i][j]; 
        }
    }
    
    for (int i = 0; i < filas; i++){
        for (int j = 0; j < colubnas; j++){
            cout<<matris2[i][j]<<" ";
        }
        cout<<"\n";
    }
    

    system("pause");
    return 0;
}