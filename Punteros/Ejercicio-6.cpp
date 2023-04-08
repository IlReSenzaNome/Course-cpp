#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

void pedirdatos();
void buscarNumero(int *, int);

int nElementos, *array;

int main()
{
    pedirdatos();
    buscarNumero(array,nElementos);

    delete[] array; 

    getch();
    return 0;
}

void pedirdatos() {
    cout<<"Indique el numero de elementos: ";
    cin>>nElementos;

    array = new int[nElementos];

    for(int i=0;i<nElementos;i++){
		cout<<"Digite un numero ["<<i<<"]: ";
		cin>>*(array+i);
	}
}

void buscarNumero(int *array, int nElementos) {
    int i = 0,dato;
    bool band = false;

    cout<<"Dijite el numero a buscar: ";
    cin>>dato;
    
    while ((band == false) && (i < nElementos)){
      if (*(array+i) == dato){
         band = true;
      }
      i++;
    }
    
   if (band == false){
      cout<<"El numero a buscar no existe en el arreglo"<<endl;
   }
   else if (band == true){
      cout<<"El numero a sido envontrado en la pos: "<<i-1<<endl;
   }
}