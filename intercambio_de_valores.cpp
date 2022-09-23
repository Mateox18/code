//Intercambiar valores de 2 variables
#include <iostream>
using namespace std;
int main(){
int x,z,aux;

cout<<"Digita el valor de x:";cin>>x;
cout<<"Digita el valor de z:" ;cin>>z;
aux = x;
x = z;
z = aux;
cout<<"\n El nuevo valor de x es:"<<x<<endl;
cout<<"\n El nuevo valor de z es:"<<z<<endl;
}

