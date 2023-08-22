#include <iostream> 
#include <conio.h>

using namespace std;

int main(){
    int numeros[100][100],x,y;

    cout<<"Digite el numero de filas: ";
    cin>>x;
    cout<<"Digite el numero de colubnas: ";
    cin>>y;

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            cout<<"Dijiye un numero ("<<i<<")("<<j<<"): ";
            cin>>numeros[i][j];
        }
    }

    for (int i = 0; i < x; i++){
        for (int j = 0; j < y; j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }

    getch();
    return 0;
}