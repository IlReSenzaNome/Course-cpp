#include <iostream>
#include <conio.h>

using namespace std;

int fibonacci(int n);

int main()
{
    int numero;
    do
    {
        cout<<"Dijite el numero de elementos: ";
        cin>>numero;
    } while (numero <= 0);

    cout<<"Serie fibonacci"<<endl;
    for (int i = 0; i < numero; i++)
    {
        cout<<fibonacci(i)<<" , ";
    }
    
  
    getch();
    return 0;
}

int fibonacci(int n)
{
    if (n < 2)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}