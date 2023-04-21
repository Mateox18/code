//El ordenamiento por seleccion consiste en:
//Buscar el elemento minimo de la lista
//Cambiarlo por el primero
//Repetir cambiando la posicion por el segundo, tercero, etc
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros[]={3,2,1,5,4};
    int i,j,aux,min;
    for(i=0;i<5;i++){ //Empezamos el bucle
        min = i; //Suponemos que la primera posicion es el numero minimo
        for(j=i+1;j<5;j++){
            if(numeros[j]<numeros[min]){ //Compara el minimo con el actual
                min = j; // Si el actual es menor, se vuelve el minimo
            }
        }
        aux = numeros[i]; // Guardamos el valor del numero temporalmente
        numeros[i] = numeros[min]; //Copiamos el elemento minimo en la posicion actual
        numeros[min]= aux; //Copiamos el auxiliar en el elemento minimo para que i quede en donde estaba min
        //i intercambia valor con el min para que min quede en donde estaba i
        //osea se mueve a la izquierda
        // i luego va min
        //despues de ordenar
        //min luego i
        //i toma la posicion de min
    }
        cout<<"Orden ascendente: ";
    for(i=0;i<5;i++){ // Imprime empezando desde el menor
        cout<<numeros[i]<<" ";
    }
     cout<<"Orden descendente: ";
    for(i=4;i>=0;i--){ //Imprime empezando desde el menor
        cout<<numeros[i]<<" ";
    }
     getch();
    return 0;
}