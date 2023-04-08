#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int matris1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int matris2[3][3] = {{1,2,3},{4,5,6},{7,8,9}},suma[3][3];

    cout<<"Primera matris "<<endl;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matris1[i][j];
        }
        cout<<"\n";
    }
    
    cout<<"Segunda matris "<<endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matris2[i][j];
        }
        cout<<"\n";
    }

    cout<<"Suma de las matrices: "<<endl;

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cout<<matris1[i][j] + matris2[i][j]<<" ";
        }
        cout<<"\n";
    }

    getch();
    return 0;
}