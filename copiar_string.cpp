//Copiar elementos de un string a otro
#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
int main(){
    char nombre1[] = "Mateo";
    char nombre2[20];
    strcpy(nombre2, nombre1); // copiamos el contenido de un string a otro
    cout<<nombre2;
    return 0;
    getch();
}