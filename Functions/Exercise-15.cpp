#include <iostream>
#include <conio.h>

using namespace std;

void pedirdatos();
void matrs(int mat[][100],int ,int);

int mat[100][100],nfilas,ncolubnas;

int main(){
    pedirdatos();
    matrs(mat,nfilas,ncolubnas);


    getch();
    return 0;
}

void pedirdatos(){
    cout<<"Dijite el numero de filas: ";
    cin>>nfilas;
    cout<<"Dijite el numero de colubnas: ";
    cin>>ncolubnas;
    for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncolubnas; j++){
            cout<<"Digite un numero: ("<<i<<")("<<j<<"): ";
            cin>>mat[i][j];
        }
    }
}

void matrs(int mat[][100],int nfilas,int ncolubnas){
    char band = 'F';
    if (nfilas == ncolubnas){
        for (int i = 0; i < nfilas; i++){
        for (int j = 0; j < ncolubnas; j++){
           if (mat[i][j] == mat[j][i]){
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
}