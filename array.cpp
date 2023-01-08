// un array (o arreglo) es un tipo de dato que permite almacenar otros datos del mismo tipo en su interior 
// y ser localizados mediante su posicion o indice
// la estructura seria asi  0 1 2 3 4
//                          a b c d e
// un array siempre tiene n-1 elementos esto porque se cuenta el 0
// si determinas que sean 5 elementos entonces las posiciones serian 0 1 2 3 4
// como se crea un array? como si fuese una variable, int numeros [10]; donde 10 es el numero de elementos
// funciona para todos los tipos de variables (char, float, int)
// si queremos declarar los elementos desde el inicio seria asi:
// int numeros [] = {21,32,15,64}; donde lo que esta dentro de un corchete son los elementos
// como buscamos cosas dentro de un array? simple ponemos numeros[3] despues de iniciar el array
// asi estaremos buscando el dato en la posicion 3
// en el caso de letras haremos: char letras[5] = {"a","b","c","d","e"};
// ahora un programa que calcule la suma de elementos dentro de un array y de el resultado
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numeros[5] = {1,2,3,4,5}; // iniciamos el array
    int suma = 0; // una variable para almacenar la suma
    for(int i = 0; i<5; i++){ // iniciamos el bucle desde 0 ya que el array empieza desde 0 y hasta 5 por el numero de elementos
    suma += numeros[i]; // la suma es igual a la suma mas cada uno de los elementos del array 
    // i es la posicion osea que aumentara hasta hacer la suma de los 5 elementos especificados en el for
    }
    cout<<"la suma de los elementos del array es: "<<suma<<endl;
    getch();
    return 0;
}
// esto se podria hacer exactamente igual pero con cualquier operacion aritmetica
// como sumar, restar, multiplicar, dividir, etc...