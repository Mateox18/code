//Busqueda en un arreglo donde los datos
//deben estar en orden ascendente
//mas eficiente que la secuencial
#include <iostream>
using namespace std;
int main(){
    int numeros[]={1,2,3,4,5};
    int inf,sup,mitad,dato;
    char band = 'F';
    dato = 4;
    //Algoritmo de busqueda binaria
    inf = 0;
    sup = 5;
    while(inf<=sup){
        mitad = (inf+sup)/2;
        if(numeros[mitad]==dato){
            band = 'V';
            break;
        }
        if(numeros[mitad]>dato){
            sup = mitad;
            mitad = (inf+sup)/2;
        }
        if(numeros[mitad]<dato){
            inf =  mitad;
            mitad =  (inf+sup)/2;
        }
    }
    if(band == 'V'){
        cout<<"numero encontrado en: "<<mitad<<endl;
    }
    if(band == 'f'){
        cout<<"numero no encontrado"<<endl;
    }
    return 0;
    cin.get();
}