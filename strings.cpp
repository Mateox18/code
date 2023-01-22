//String, los strings son arrays que almacenan cadenas de caracteres o palabras
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    string nombre = "Mateo";
    cout<<nombre<<endl;
    char nombre2[100];// string vacio
    cout<<"Digite su nombre: ";
    gets(nombre2);// almacenar palabra
    cout<<nombre2<<endl;
    // hallar la longitud de un string
    int longitud=0;
    longitud = strlen(nombre2);
    cout<<"El numero de letras en su nombre es: "<<longitud;
return 0;
getch(); 
}