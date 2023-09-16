//las estructuras son agrupaciones de datos como los arreglos
//Excepto que estas contienen diferentes tipos de datos
//su estructura incluye cada uno de los datos los cuales pueden ser ilimitados
//esta estructura puede ser usada como base
//ej: estructura cd contiene variables cd1 cd2 cd3
//con los mismos criterios
#include<iostream>

using namespace std;
struct persona{
    char nombre[20];// nombre de la persona
    int edad; //edad de la persona
} persona1 = {"Mateo", 15}, persona2 = {"alpinitox", 18};
// las variables se inicializan en la funcion, en caso de no conocer los datos se inicializan en la funcion main
// tal que nombredelaestructura variable1, variable2;
int main(){
    cout<<"Nombre1:"<<persona1.nombre;
    cout<<"Edad1:"<<persona1.edad<<endl;
    cout<<"\nNombre2:"<<persona2.nombre;
    cout<<"Edad2:"<<persona2.edad<<endl;
    cin.get();
    return 0;
}
