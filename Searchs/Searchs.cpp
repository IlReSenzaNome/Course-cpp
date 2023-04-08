#include <iostream>
 #include <conio.h>

using namespace std;

 int main(){
    int a[] = {3,4,2,1,5};
    int i = 0,dato = 10;
    char band = 'F';
    
    while ((band == 'F') && (i < 5)){
      if (a[i] == dato){
         band = 'V';
      }
      i++;
    }
    
   if (band == 'F'){
      cout<<"El numero a buscar no existe en el arreglo"<<endl;
   }
   else if (band == 'V'){
      cout<<"El numero a sido envontrado en la pos: "<<i-1<<endl;
   }
   
    getch();
    return 0;
 }
