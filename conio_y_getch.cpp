//Ahora bien si se usa como libreria iostream tambien podemos usar la libreria conio.h para por ejemplo usar el comando getch
//El cual lo que hace es que nuestro programa no se cierre instantaneamente al abrirlo mediante consola de windows
//Esto ya que espera una respuesta del usuario para cerrar la consola
#include <iostream>
#include <conio.h>
using namespace std;
int main(){

cout<<"Prueba getch"<<endl;

getch();
    return 0;
}