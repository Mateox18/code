//operaciones con c++ donde los valores los da el usuario
#include<iostream>
using namespace std;
int main (){
int n1,n2;
int suma= 0;
int resta= 0;
int multiplicacion= 0;
int division= 0;
//Para poner varias variables en una sola linea se separan mediante comas.
cout<< "Dime un numero"; cin >>n1;
cout<< "Dime otro numero";cin >>n2;
suma = n1+n2;
resta = n1-n2;
multiplicacion = n1*n2;
// la multiplicacion se hace con asterisco (*)
division =n1/n2;

cout<< "la suma es:" <<suma<<endl;
cout<< "la resta es:"<<resta<<endl;
cout<< "la multiplicacion es:"<<multiplicacion<<endl;
cout<< "la division es:"<<division<<endl;
    return 0;
}