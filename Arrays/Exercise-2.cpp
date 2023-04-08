#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
    int numeros[] = {1,5,4,9,7};
    int multiplicacion = 1;

    for (int i = 0; i < 5; i++){
        multiplicacion *= numeros[i];
    }
    
    cout<<"la multiplicacion de los numeros es: "<<multiplicacion<<endl;

    system("pause");
    return 0;
}
