#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int array[] = {1,2,3,4,5};
    int *dir_array;
    
    dir_array = array;
    
    for (int i = 0; i < 5; i++)
    {
        cout<<"Posicion de memoria "<<array[i]<<" es: "<<dir_array++<<endl;
    }

    getch();
    return 0;
}
