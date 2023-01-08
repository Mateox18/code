//Programa que suma todos los numeros digitados que no sean 0
#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
    int numero, suma = 0;
    do{
        cout<<"Digite un numero"; cin>>numero;
            suma += numero;
    }while ((numero<20) || (numero>30) && (numero !=0));
    cout<<"\nLa suma es:"<<suma<<endl;
    return 0;
    
}    