//Programa que descomponga un numero en factores primos (10=2*2*5)
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numero;
    cout<<"digite un numero";  
    cin>>numero;
// empezamos con el numero al que le queremos hallar sus facrtores primos
    for(int i=2;numero>1;i++){ 
// inicializamos el que seria el primer divisor posible (2) y ponemos que se realize siempre y cuando sea mayor que 1
// osea que queden factores primos
//ademas ponemos que si ya no se puede dividir por 2 aumente al numero al que sea divisible
            while (numero%i==0) // aca especificamos que divida siempre que la division sea exacta, si no, aumenta el divisor.
            {
                cout<<i<<""<<endl; // imprime el factor primo
                numero /= i; 
            }
            
    }

    getch();
    return 0;
}