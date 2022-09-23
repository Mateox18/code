//Calcular promedio de 5 notas
#include <iostream>
using namespace std;
int main(){

float nota1, nota2, nota3, nota4, nota5, promedio, suma;
cout<<"digita tus 5 notas del bimestre";cin>>nota1>>nota2>>nota3>>nota4>>nota5;

suma = nota1+nota2+nota3+nota4+nota5;
promedio = suma/5;
cout<< "El promedio es:" <<promedio<<endl;
return 0;
}
