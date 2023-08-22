#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5};
    int sup,inf,mit,dato = 5,i = 0;
    char band = 'F';
    
    inf = 0;
    sup = 5;

    while (inf <= sup){
        mit = (inf + sup) / 2;

        if (numeros[mit] == dato){
            band = 'V';
            break;
        }
        if (numeros[mit] > dato){
            sup = mit;
            mit = (inf + sup) / 2;
        }
        if (numeros[mit] < dato){
            inf = mit;
            mit = (inf + sup) / 2;
        }
        i++;
    }
    
    if (band = 'V'){
        cout<<"El numero se ha encontrado en la posicion: "<<mit<<endl;
    }
    
    else{
        cout<<"El numero NO ha sido encontrado"<<endl;
    }

    getch();
    return 0;
}
