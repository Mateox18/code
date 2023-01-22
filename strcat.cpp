#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    char frase1[] = "Hola a ";
    char frase2[] = "todos los q leen esto.";
    char frase3[30];

    strcpy(frase3,frase1); // Frase3 = Hola a
    strcat(frase3,frase2);// Frase 3 = Hola a todos los que leen esto.
    cout<<frase3<<endl;
    return 0;
    getch();
}