#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
    char cad[20];

    cout<<"Digite su nombre en mayusculas: ";
    cin.getline(cad,20,'\n');

    if(strncmp(cad,"A",1)==0){
		strlwr(cad);
		cout<<cad<<endl;
	}
    else{
        cout<<"Su nombre no comienza por A";
    }
    

    getch();
    return 0;
}