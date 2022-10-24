//Es parecido a while pero primero ejecuta una instruccion y con base a ella ejecuta while.
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
int m;

m = 1;
do{
    cout<<m<<endl;
    m++;
 } while(m<=18);
getch();
return 0;
} 