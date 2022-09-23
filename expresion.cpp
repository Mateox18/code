//algebra en c++
#include<iostream>

using namespace std;
int main(){
float a;
float b;
float resultado;
cout<<"Digite un valor para a"; cin>> a;
cout<<"Digite un valor para b"; cin>> b;
resultado= (a/b+1);
cout.precision(2);
cout<<"n/Eso da:"<<resultado<< endl;
    return 0;
}