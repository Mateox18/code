//Contar numeros superiores a 0 introducidos
#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numero, conteo = 0;
    do{
            cout<<"Digite un numero:";
            cin>>numero;
            if (numero>0){
                conteo++;
            }
            
    }while (numero !=0 );
    cout<<"\nEl numero de valores mayor a 0 es:"<<conteo<<endl;
getch();
return 0;

}