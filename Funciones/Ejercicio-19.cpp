#include <iostream>
#include <conio.h>

using namespace std;

int sumar(int n);

int main()
{
    int nelementos;
    do
    {
        cout<<"Dijite el numero de elementos: ";
        cin>>nelementos;
    } while (nelementos <= 0);
    
    cout<<endl<<"La suma es: "<<sumar(nelementos)<<endl;

    getch();
    return 0;
}

int sumar(int n)
{
    int suma = 0;
    if (n == 1)
    {
        suma = 1;
    }
    else
    {
        suma = n + sumar(n - 1);
    }
    return suma;
}