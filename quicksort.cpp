//Algoritmo de ordenamiento dividiendo la lista en particiones
//Es el metodo mas eficiente y rapido
//Cada lista se ordena por separado
//Esto usando un pivot, la lista a la izquierda es menor
//El de la derecha es mayor
//Se divide en listas recursivamente
//Empezando por izquierda
//Al final la particion izquierda va seguida del pivot
//Luego va la derecha, quedando ordenado.
//central= (PRIMERO+ULTIMO)/2
//Primer y ultima posicion del arreglo
//Pivot = a[central]
//La particion comprueba que los elementos
//de la derecha sean mayores
//y los de la izquierda menores
#include<iostream>

using namespace std;
void intercambio(float &x, float &y){//funcion intercambio
    float aux;
    aux = x;
    x = y;
    y = aux;
}
void quicksort(float a[], int primero, int ultimo){//Ordenamiento
    int i, j, central;
    float pivot;
    central = (primero+ultimo)/2;// valor central
    pivot = a[central];// pivot
    i = primero;
    j = ultimo;
    do{
        while(a[i]<pivot)i++; //  Miramos si son menores a la izquierda del pivot
        while(a[j]>pivot)j--;// Miramos si son mayores a la derecha del pivot
        if(i<=j){
            intercambio(a[i],a[j]);// Cambiamos posiciones si las particiones no estan ordenadas
            i++;
            j--;
        }
    }while(i<=j);
    if(primero<j){
        quicksort(a,primero,j);//Ordenada la sublista izq
    } 
    if( i < ultimo){
        quicksort(a,i,ultimo);//Ordenada la sublista derecha
    }
}
int main(){
    float arreglo[] = {4,7,1,8,2,10,5,9,3};
    quicksort(arreglo,0,8);
    cout<<"Arreglo ordenado"<<endl;
    for(int i =0; i<9; i++){
        cout<<arreglo[i]<<" ";
    }
    cin.get();
    return 0;
}

