#include <iostream>
#include <conio.h>

using namespace std;

int mayoE(int *,int);

int main()
{
    const int nElementos = 5;
    int numbers[nElementos] = {3,5,2,8,1};

    cout<<"El mayor elmento del arreglo es: "<<mayoE(numbers,nElementos)<<endl;

    getch();
    return 0;
}

int mayoE(int *dirvec,int nElementos) {
    int max = 0;
    for (int i = 0; i < nElementos; i++)
    {
        if (*(dirvec+i) > max)
        {
            max = *(dirvec+i);
        }
    }
    return max;
}