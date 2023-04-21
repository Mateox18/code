//Metodo de ordenamiento el cual consiste en revisar las posiciones de los elementos del arreglo
// Esto hasta que esten en las posiciones correctas
//por ej 5 3 2 4 1
// empezaria cambiano el 5 con el 3
//Luego lo mismo hasta que quede bien
//Ej;
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int numeros[] = {4,1,2,5,3};
    int i,j,aux;
    //Ordenamiento
    for(i=0;i<5;i++){ //Espera hasta que este ordenado y va probando cada numero
        for(j=0;j<5;j++){
            if(numeros[j]>numeros[j+1]){ // J es el numero actual, esto verifica si el numero es menor que el siguiente.
                aux = numeros[j]; //Iguala el auxiliar a j (el mayor)
                numeros[j]=numeros[j+1]; //el mayor se mueve una posicion adelante (j) y lo cambia con el menor (j+1) haciendo que quede atras
                numeros[j+1]= aux;  // el numero siguiente se vuelve el mayor
            }
        }
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