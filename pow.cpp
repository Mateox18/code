//usar la funcion pow para elevar un numero
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
int main(){
    int suma = 0, elevacion = 0, n;
    cout<<"digite el numero de elementos a sumar:"; cin>>n;

    for(int i=1;i<=n;i++){
            elevacion = pow(2,i); // Usamos pow para que 2 elevado i, numerador antes de la coma exponente despues
            suma += elevacion; // Sumamos las elevaciones
    }
    // El bucle se repite hasta que el numero de exponentes alcanze al introducido
    cout<<"La suma total es:"<<suma<<endl;
    getch();
    return 0;
}