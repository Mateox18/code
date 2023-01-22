#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main(){
    char nombre[] = "Mateo";
    strupr(nombre);
    cout<<nombre<<endl;
    strlwr(nombre);
    cout<<nombre;
    return 0;
    getch();
}