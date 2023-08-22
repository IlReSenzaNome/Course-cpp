#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int array[10],*dir_array;

    for (int i = 0; i < 10; i++)
    {
        cout<<"Type a number: ";
        cin>>array[i];
    }

    dir_array = array;
    
    for (int i = 0; i < 10; i++)
    {
        if (*dir_array %2 == 0)
        {
            cout<<"El numero: "<<*dir_array<<" es par:"<<endl;
            cout<<"Posicion: "<<dir_array<<endl;
        }
        dir_array++;       
    }
    
    getch();
    return 0;
}