//Programa que lea el sexo, la edad y la altura en metros de una persona (altitud)
#include<iostream>

using namespace std;

int main(){
int edad;
char sexo [10];
float altura;
//Solicitando los datos
cout<< "digite su edad"; cin>> edad;
cout<< "digite su sexo"; cin>> sexo;
cout<< "digite su altura en mts"; cin>> altura;
//Mostrando los datos
cout<< "\nEdad"<<edad<<endl;
cout<< "\nSexo"<<sexo<<endl;
cout<< "\nAltura"<<altura<<endl;

    return 0;
}