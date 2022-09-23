//Conversor de numero entero a romano
#include <iostream>
using namespace std;
int main(){
int numero_entero,unidades,decenas,centenas,miles;

cout<<"Digite un numero\n";
cin>>numero_entero;
//Primero hallamos unidades y asi sucesivamente hasta conseguir todos los valores
unidades = numero_entero%10; numero_entero /= 10;
decenas = numero_entero%10; numero_entero /= 10;
centenas = numero_entero%10; numero_entero /= 10;
miles = numero_entero%10; numero_entero /= 10;
//Ahora le asignamos las letras a los numeros por cada numero del 1 al 9 segun numeros romanos
//Esto para que el programa sepa que letra poner segun cuantas unidades, centenas, decenas, o miles halla.
switch(miles){
    case 1:cout<<"M";break;
    case 2:cout<<"MM";break;
    case 3:cout<<"MMM";break;
//Aca se ponen 3 ya que no se puede poner la flecha encima de la V para simbolizar 5000
}
switch(centenas){
    case 1:cout<<"C";break;
     case 2:cout<<"CC";break;
      case 3:cout<<"CCC";break;
       case 4:cout<<"CD";break;
        case 5:cout<<"D";break;
         case 6:cout<<"DC";break;
          case 7:cout<<"DCC";break;
           case 8:cout<<"DCCC";break;
            case 9:cout<<"CM";break;
}
switch(decenas){
   case 1:cout<<"X";break;
     case 2:cout<<"X";break;
      case 3:cout<<"XXX";break;
       case 4:cout<<"XL";break;
        case 5:cout<<"L";break;
         case 6:cout<<"LX";break;
          case 7:cout<<"LXX";break;
           case 8:cout<<"LXXX";break;
            case 9:cout<<"XC";break;
}
switch(unidades){
   case 1:cout<<"I";break;
     case 2:cout<<"II";break;
      case 3:cout<<"III";break;
       case 4:cout<<"IV";break;
        case 5:cout<<"V";break;
         case 6:cout<<"VI";break;
          case 7:cout<<"VII";break;
           case 8:cout<<"VIII";break;
            case 9:cout<<"IX";break;
}

return 0;
}