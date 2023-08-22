/*rellenar un arreglo con n numeros, posteriormente utilizando punteros determinar el menor elemento de arreglo*/
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int array[100],*dir_array;
    int n_elements,minor=999999;

    cout<<"Type the number of elements: ";
    cin>>n_elements;

    for (int i = 0; i < n_elements; i++)
    {
        cout<<"Type a number: ";
        cin>>array[i];
    }

    dir_array = array;

    for (int i = 0; i < n_elements; i++)
    {
        if (*dir_array < minor)
        {
            minor = *dir_array;
        }
        dir_array++;
    }
    
    cout<<"The minor element of array is: "<<minor<<endl;
    cout<<"Position is: "<<dir_array<<endl;

    getch();
    return 0;
}
