#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char nombre1[] = "Alexis";
    char nomvre2[20];

    strcpy(nomvre2,nombre1);

    cout<<nomvre2<<endl;  

    getch();
    return 0;
}