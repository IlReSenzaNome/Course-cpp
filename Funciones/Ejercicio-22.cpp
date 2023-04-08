#include <iostream>
#include <conio.h>

using namespace std;

int escribenumeros(int, int);

int main()
{
    int ini,fin;

    cout<<"Dijite el numero de inicio: ";
    cin>>ini;
    cout<<"Dijite el numero final: ";
    cin>>fin;

    for (int i = ini; i <= fin; i++)
    {
        cout<<escribenumeros(i,fin)<<"  ";
    }
    
    getch();
    return 0;
}

int escribenumeros(int ini, int fin)
{
    if (ini == fin)
    {
        return ini;
    }
    else
    {
        return escribenumeros(ini,fin - 1);
    }
}