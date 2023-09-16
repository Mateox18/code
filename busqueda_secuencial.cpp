// metodo de busqueda para encontrar
// un elemento en un arreglo
#include<iostream>

using namespace std;
int main(){
    int a[] = {3,4,2,1,5};
    int i,dato;
    char band = 'F';
    dato = 1;
    //Busqueda secuencial
    i=0;
    while((band == 'F') && (i<5)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }
    if (band == 'F'){
        cout<<"El valor no esta en el arreglo"<<endl;
    }
    else if(band == 'V'){
        cout<<"Valor encontrado en: "<<i-1<<endl;
    }
    return 0;
    cin.get();
}