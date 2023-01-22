#include <stdlib.h>
#include <time.h>
#include<iostream>
using namespace std;
 
int main()
{
    int num, c;
    srand(time(NULL)); // inicializamos la generacion de numeros aleatorios
    // esta funcion toma una semilla en funcion de la hora del procesador
    
    for(c = 1; c <= 10; c++) // vamos a generar 10 numeros aleatorios
    {
        num = 1 + rand() % (50); // creamos un numero aleatorio entre 1 y 50
        cout << num<< " ";
    }
    
    return 0;
}