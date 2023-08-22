#include <iostream>
#include <conio.h>

using namespace std;

void vanuevos(int & , int & );

int main(){
    int numero1,numero2;

    cout<<"digite dos numeros: ";
    cin>>numero1>>numero2;

    vanuevos(numero1,numero2);

    cout<<"El nuevo valor del primer numero es: "<<numero1<<endl;
    cout<<"El nuevo valor del segundo numero es: "<<numero2<<endl;
    
    getch();
    return 0;
}

void vanuevos(int & xnum, int & ynum){
    cout<<"El valor del primer numero es: "<<xnum<<endl;
    cout<<"El valor del segundo numero es: "<<ynum<<endl;
    xnum = 89;
    ynum = 45;
}