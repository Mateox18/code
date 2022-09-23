// If es una sentencia en c++ mediante la cual no se ejecuta todo el codigo si no se cumple una condicion.
//Su estructura es la siguiente: if(condicion){instruccion} esto es cuando la condicion se cumple.
//Si no se cumple usamos else otra sentencia en c++. 
//Su estructura es la siguiente if(condicion){instruccion} else {instruccion}
// Ejemplo:
#include <iostream>
using namespace std;
int main(){
int numero,dato=8;
cout<<"Dame un numero"; cin>>numero;
if(numero==dato)
//Para saber si es igual a la variable ponemos == si queremos saber si es diferente ponemos !=. Para saber si es mayor o menor usamos <>.
//Para saber si es mayor o igual usamos >= para saber si es menor o igual usamos <=
//Ademas si tenemos varias condiciones que queremos poner en if se coloca || y luego se abre parentesis otra vez.
// Ej: if ((a=b) || (c=b) || (d=b))
{
cout<<"El numero es 8";    
}
else {
cout<<"El numero es diferente de 8";
}
    return 0;
}
