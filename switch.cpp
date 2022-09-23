//sentencia switch
#include<iostream>
using namespace std;
int main(){
int numero;

cout<<"digite un numero entre 1-5";
cin>>numero;
// para usar switch usamos una variable y esto evalua en este caso cual numero es, dependiendo el numero ejecuta el caso correspondiente
//si usamos letras se usa '', en swicth usamos default para mostrar lo q pasa si no se cumple ningun caso
switch(numero){
    case 1: cout<<"el numero es 1"; break;
     case 2: cout<<"el numero es 2"; break;
      case 3: cout<<"el numero es 3"; break;
       case 4: cout<<"el numero es 4"; break;
        case 5: cout<<"el numero es 5"; break;
     default: cout<<"no esta en el rango solicitado"; break;   

}
return 0;
}