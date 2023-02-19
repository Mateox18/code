//Un programa que pueda realizar calculos de valores necesarios para operaciones del movimiento circular uniforme.
//Esto para hacer calculos de experimentos fisicos.
#include<iostream>
#include<conio.h>
#include<string>
#include<math.h>
using namespace std;
int main(){
float velT,aceT,T,D,radio,ang,rapA,per,Dt,x0,x,xf;
float rad = 57.29;
    cout<<"Iniciando movimiento_circular_uniforme.exe..."<<endl;
    //Comprobamos cuales son los datos faltantes en el problema
    cout<<"Introduzca los datos faltantes en el problema (incognitas), si faltan responda con un 0, si no con un 1"<<endl;
    cout<<"Falta la velocidad tangencial?"<<endl;
    cin>>velT;
    cout<<"Falta la aceleracion tangencial?"<<endl;
    cin>>aceT;
    cout<<"Falta el tiempo total?"<<endl;
    cin>>T;
    cout<<"Falta la distancia de la longitud de arco?"<<endl;
    cin>>D;
    cout<<"Falta la distancia total recorrida durante el movimiento?"<<endl;
    cin>>Dt;
    cout<<"Falta el angulo de el momento dado en el movimiento?"<<endl;
    cin>>ang;
    cout<<"Falta la rapidez angular del movimiento?"<<endl;
    cin>>rapA;
    cout<<"Falta el periodo (tiempo en dar una vuelta)?"<<endl;
    cin>>per;
      cout<<"Falta la posicion inicial?"<<endl;
    cin>>x0;
       cout<<"Le solicitaron una posicion especifica?"<<endl;
    cin>>x;
        cout<<"Le solicitaron la posicion final?"<<endl;
    cin>>xf;
    cout<<"Este programa usa como ejemplo problemas de 3 incognitas por lo tanto puede que le de datos que ya tiene"<<endl;
    if (velT && aceT && T && ang && rapA && per && Dt && x && x0 && xf <= 1)  
    // Verificamos que se hayan introducido los datos de manera correcta con el primer if
    {
        if(velT && aceT && T && ang && rapA && per && Dt && x && x0 && xf == 1){
           cout<<"Error: Ya conoce todos los datos por lo tanto el problema ya esta resuelto."<<endl;
            }
        }
        else{
            if(velT && rapA && aceT == 0){ // Si faltan los 3 datos entonces se resuelve de la siguiente manera
                cout<<"Introduzca el angulo del momento seleccionado: "<<endl;
                cin>>ang;
                cout<<"Introduzca el tiempo transcurrido: "<<endl;
                cin>>T;
                rapA = ang / T;
                cout<<"La rapidez angular (velocidad angular si se quiere ver asi) es: "<<rapA<<endl;
                cout<<"Introduzca el radio del giro solicitado: ";
                cin>>radio;
                velT =  rapA * radio;
                cout<<"La velocidad tangecial es: "<<velT<<endl;
                aceT = pow(velT, 2) / radio; // pow para elevar al cuadrado
                cout<<"La aceleracion tangencial es: "<<aceT<<endl;
            }else{ 
                if (velT && Dt && x && x0 == 0)
                {
                    
                }
                

            } 
            
            }
        }
    }
    else{
        
        cout<<"Error: Introdujo un valor mayor que 1, por favor introduzca los datos de la manera solicitada."<<endl; 
    }
    
    getch();
    return 0;
}