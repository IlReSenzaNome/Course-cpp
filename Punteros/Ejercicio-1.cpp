#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int number,*dir_number;

    //we ask you to say a number
    cout<<"Type a number: "; cin>>number;
    dir_number = &number;

    //Check if the number is odd or even
    if (number == 0)
    {
        cout<<"The number is "<<*dir_number<<endl;
        cout<<"the memory address is: "<<dir_number<<endl;
    }
    else if (number %2 == 0)
    {
        cout<<"The number "<<*dir_number<<" is pair"<<endl;
        cout<<"the memory address is: "<<dir_number<<endl;
    }
    else
    {
        cout<<"The nuber "<<*dir_number<<" is odd"<<endl;
        cout<<"the memory address is: "<<dir_number<<endl;
    }
     
    getch();
    return 0;
}
