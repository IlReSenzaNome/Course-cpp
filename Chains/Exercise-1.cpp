#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cadena[100];
    int longitud = 0;

    cout<<"Digite una cadena de caracteres: ";
    cin.getline(cadena,100,'\n');

    longitud = strlen(cadena);

    if (longitud > 10){
        cout<<cadena<<endl;
    }
    else{
        
    }
    
    getch();
    return 0;
}