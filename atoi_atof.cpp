//Funciones atoi y atof para convertir numeros de strings a valores enteros usables en operaciones.
//atoi convierte a enteros atof a reales.
#include<iostream>
#include<conio.h>
#include<stdlib.h>
using namespace std;
int main(){
    char cad[] = "123";
    int numero;
    numero = atoi(cad);
    cout<<numero<<endl;

    return 0;
    getch();
}
