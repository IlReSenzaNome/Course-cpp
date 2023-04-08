#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cad[30];
    int vocal_a = 0,vocal_e = 0,vocal_i = 0,vocal_o = 0,vocal_u = 0;

    cout<<"Digite una frase: ";
    cin.getline(cad,30,'\n');

    for (int i = 0; i < 30; i++){
        switch (cad[i]){
        case 'a': vocal_a++; break;
        case 'e': vocal_e++; break;
        case 'i': vocal_i++; break;
        case 'o': vocal_o++; break;
        case 'u': vocal_u++; break;
        }
    }

    cout<<"La vocal a se encontro: "<<vocal_a<<endl;
    cout<<"La vocal e se encontro: "<<vocal_e<<endl;
    cout<<"La vocal i se encontro: "<<vocal_i<<endl;
    cout<<"La vocal o se encontro: "<<vocal_o<<endl;
    cout<<"La vocal u se encontro: "<<vocal_u<<endl;
    
    getch();
    return 0;
}