//calcular el iva con c++
#include <iostream>

using namespace std;

int main (){
float precio,iva;
// El terminal pregunta al usuario el precio del producto
cout<< "digite el precio del producto";
cin>> precio;
// Aca se define como se halla el iva
iva= precio*0.19;
float precioFinal =precio+iva;
//Lo que muestra el terminal con el resultado
cout<<"\nEl precio final es:" <<precioFinal<< endl;

return 0;
}