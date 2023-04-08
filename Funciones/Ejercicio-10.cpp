#include <iostream>
#include <conio.h>

using namespace std;

void calc_años(int ,int& ,int& ,int&);

int main(){
    int Total_dias,año,mes,dia;

    cout<<"Dijite el numero de dias trancuridos: ";
    cin>>Total_dias;

    calc_años(Total_dias,año,mes,dia);

    cout<<"Fecha actual: "<<dia+1<<"/"<<mes+1<<"/"<<año+2000<<endl;

    getch();
    return 0;
}

void calc_años(int Total_dias,int& año,int& mes,int& dia){
    año = Total_dias / 365;
    Total_dias %= 365;
    mes = Total_dias /30;
    dia = Total_dias %30;
}