//Ordenamiento por insercion
// SI numero izquierda> numero actual hace un cambio
//Asi hasta que quede ordenado
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros[] = {4,2,3,1,5};
    int i, posicion, aux;
    //Ordenamiento por insercion
    for(i=0; i<5; i++){
        posicion = i; // Guarda la posicion inicial
        aux = numeros[i]; // Guarda los numeros
        while((posicion>0) && (numeros[posicion-1] > aux)){
            // Numeros [posicion-1] es el numero a la izquierda 
            //y aux el actual
            numeros[posicion] = numeros[posicion-1]; 
            //Pone el menor a la izquierda
            posicion--;
            // Se cambia la posicion 
            //para moverlo hasta la izquierda lo mas posible.
        } 
        numeros[posicion]= aux; 
        //Deja el numero original a la derecha
    }
     cout<<"Orden ascendente: ";
    for(i=0;i<5;i++){ // Imprime empezando desde el menor
        cout<<numeros[i]<<" ";
    }
     cout<<"Orden descendente: ";
    for(i=4;i>=0;i--){ //Imprime empezando desde el menor
        cout<<numeros[i]<<" ";
    }
    return 0;
    getch();
}