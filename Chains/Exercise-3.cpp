#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char palabra1[20],palabra2[20];

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(palabra1,20,'\n');
    cout<<"Digite una cadena de caracteres: ";
    cin.getline(palabra2,20,'\n');

    if (strcmp(palabra1,palabra2) == 0){
        cout<<"Ambas cadenas son iguales";
    }
    else if (strcmp(palabra1,palabra2) > 0){
        cout<<palabra1<<" "<<"Es mayor alfabeticamente";
    }
    else{
        cout<<palabra2<<" "<<"Es mayor alfabeticamente";
    }
    
    getch();
    return 0;
}