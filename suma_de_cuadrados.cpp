#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int suma = 0, cuadrado;

    for(int m=1;m<=10;m++){
        cuadrado = m * m;
        suma += cuadrado;
    }
cout<<"El resultado de la suma es:"<<suma<<endl;
getch();
return 0;
}