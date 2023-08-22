#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int number,*dir_number,count = 0;

    cout<<"Type a number: "; cin>>number;
    dir_number = &number;
    
    for (int i = 1; i < *dir_number; i++)
    {
        if (*dir_number %i == 0)
        {
            count++;
        }
    }
    
    if (count > 2)
    {
        cout<<"Thr number "<<*dir_number<<" is not prime"<<endl;
        cout<<"The memory address is: "<<dir_number<<endl;
    }
    else
    {
        cout<<"The number "<<*dir_number<<" is prime"<<endl;
        cout<<"The memory address is: "<<dir_number<<endl;
    }
    
    getch();
    return 0;
}
