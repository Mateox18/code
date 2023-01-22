
// Almacenar en un string datos puestos por un usuario
#include<iostream>
using namespace std;

int main()
{
    char str[500];
    cout << "Introduce una frase: ";
    cin.getline(str, 500, '\n'); // en donde str es donde se almacenara, 500 la longitud, y el comando para acabar de digitar es \n
    cout << "Tu frase es: " << str;
    cin.get();
}