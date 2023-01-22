#include<conio.h>
#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char palabra1[] = "Hola";
    char palabra2[] = "Hola";
    if (strcmp(palabra1,palabra2)==0) // Si son iguales dara 0 si no dara 1
    {
        cout<<"Los strings son iguales.";
    }else{
    cout<<"No son iguales.";
    }
    return 0;
    getch();
}