#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int nunmeros[3][3];

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<"Digite un numero ("<<i<<")("<<j<<"): ";
            cin>>nunmeros[i][j];
        }
    }

    cout<<"\nLa matris normal es: \n";

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<nunmeros[i][j];
        }
        cout<<"\n";
    }
    
    cout<<"\nLa matris transpuesta es: \n";
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<nunmeros[j][i];
        }
        cout<<"\n";
    }
    
    getch();
    return 0;
}