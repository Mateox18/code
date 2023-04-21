// Un array bidimensonal es una tabla donde se usa de la siguiente manera tipo nombre[nfilas][ncolumnas];
//Su estrucura se veria de la siguiente manera
//       columna 1 columna 2 columna 3...
// fila 1   3        5          6
// como una tabla
// las filas es lo primero que se introduce y se cuenta desde el 0
#include<iostream>
#include<conio.h>
using namespace std;
int main (){
    int numeros[100][100], filas, columnas;
    cout<<"Digite el numero de columnas: "<<endl;
    cin>>columnas;
    cout<<"Digite el numero de filas: "<<endl;
    cin>>filas;
    // almacenando elementos en la matriz
    for(int i = 0; i<filas; i++){
        for (int j = 0; j < columnas; j++)
        {
           cout<<"Digite un numero: ["<<i<<"] ["<<j<<"]: "<<endl;
            cin>>numeros[i][j];
        }
    }
    // mostrando la matriz
     for(int i = 0; i<filas; i++){
        for (int j = 0; j < columnas; j++)
        {
                cout<<numeros[i][j];

        }
        cout<<"\n";
     }
    return 0;
    getch();
}