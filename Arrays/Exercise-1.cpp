#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {1,4,3,6,7};
    int suma = 0;

    for(int i = 0;i < 5;i++){
        suma += numeros[i];
    }

    cout<<"El resultado de la suma es: "<<suma<<endl;

    getch();
    return 0;
}
