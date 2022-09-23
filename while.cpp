//While es un sentencia para crear estructuras repetitivas.
//Si se cumple la condicion se ejecutan instrucciones concretas.
//Por ejemplo aqui tenemos un programa que nos muestra los numeros del 1 al 10 ya que m se le va sumando uno.
//Esto ya que tenemos como condicion que se ejecute lo que esta dentro del while hasta que m sea 10 o mayor.
#include <iostream>
using namespace std;
int main(){
int m;
    
m = 1;
while (m<=10)
{
    cout<<m<<endl;
    m++;
}



    return 0;
}