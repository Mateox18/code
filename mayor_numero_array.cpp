#include<iostream>
#include<conio.h>
using namespace std;
int main(){
    int numeros[100],n,mayor = 0;
    cout<<"digite el numero de elementos del array: ";
    cin>>n;
        for (int i = 0; i < n; i++)
        {
            cout<<i+1<<". digite un numero: "<<endl;
            cin>>numeros[i];
        
        if (numeros[i]>mayor)
        {
           mayor = numeros[i];
        }
        }
    cout<<"\nEl mayor elemento del array es: "<<mayor<<endl;

    getch();
    return 0;
}