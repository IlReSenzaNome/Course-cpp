#include <iostream>
#include <conio.h>

using namespace std;

void intercambio(float *,float *);

int main()
{
    float num1 = 20.8,num2 = 6.78;

    cout<<"Primer numero: "<<num1<<endl;
    cout<<"Segundo numero: "<<num2<<endl;

    intercambio(&num1,&num2);

    cout<<"\n\nIMprimiendo los datos intercambiados\n\n";
    cout<<"Primer numero: "<<num1<<endl;
    cout<<"Segundo numero: "<<num2<<endl;

    getch();
    return 0;
}

void intercambio(float *dir_num1,float *dir_num2) 
{
    float aux;

    aux = *dir_num1;
    *dir_num1 = *dir_num2;
    *dir_num2 = aux;
}