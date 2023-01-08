// programa que muestra los valores dentro de un array asi como su posicion en el array
// todo con datos dados por el usuario
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numeros [100];
    int n;
    cout<<"digite el espacio del array: ";
    cin>>n;
    for(int i = 0; i<n; i++){ // donde i es el espacio del array y va aumentando hasta ser igual al especificado por el usuario
        cout<<"digite un numero: ";
        cin>>numeros[i]; // le pedimos los datos al usuario y el array se expande con ellos.
    }
    // ahora mostraremos su posicion
     for(int i = 0; i<n; i++){
        cout<<i<<"  dato "<<numeros[i]<<endl;
     }
    getch();
    return 0;

}