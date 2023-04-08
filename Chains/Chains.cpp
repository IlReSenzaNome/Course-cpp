#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char palabra1[] = "Alexis";
    char palabra2[] = {'A','l','e','x','i','s'};
    char nombre[20];

    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n');

    cout<<nombre<<endl;

    getch();
    return 0;
}