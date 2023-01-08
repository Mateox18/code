//un programa que calcule 1-2+3-4+5...n
#include <iostream>
#include <conio.h>
using namespace std;
int main(){
    int n, par, sumapares=0,sumaimpares=0,sumatotal;
    cout<<"introduzca el numero de elementos a sumar:";
    cin>>n;
    for(int i=1;i<=n;i++){
            if(i%2==0){ // aplicamos el if si es par
                    par = i*-1; //convertimos el par en negativo para el momento que al sumarlos estos se resten a los impares
                    sumapares += par; //almacenamos la suma de apres
            }
            else{
                    sumaimpares += i; //sumamos los que no cumplen la primera condicion osea los impares
            }
    }
    // ahora vamos a sumar todo
    sumatotal = sumaimpares + sumapares;
    cout<<"La suma es:"<<sumatotal<<endl;
    getch();
    return 0;
}