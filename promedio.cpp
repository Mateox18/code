#include <iostream>
using namespace std;
struct promedio{
float nota1;
float nota2;
float nota3;
};
struct alumno{
    char nombre[30];
    int edad;
    char sexo[20];
    struct promedio Prom;
};
int main(){
    int numalumnos;
    cout << "Ingrese el número de alumnos: ";
    cin >> numalumnos;
    cin.ignore();
     alumno *alumnos = new alumno[numalumnos];
    float promedio_alumno;
    for (int i = 0; i < numalumnos; ++i) {
        cout << "Alumno " << i + 1 << endl;
        cout<<"Digite su nombre: ";
        cin.getline(alumnos[i].nombre, sizeof(alumnos[i].nombre),'\n');
        cout<<"Edad: ";
        cin>>alumnos[i].edad;
        cin.ignore();
        cout<<"Sexo: ";
        cin.getline(alumnos[i].sexo, sizeof(alumnos[i].sexo), '\n');
        cout<<"Nota 1:";
        cin>>alumnos[i].Prom.nota1;
        cout<<"Nota 2:";
        cin>>alumnos[i].Prom.nota2;
        cout<<"Nota 3:";
        cin>>alumnos[i].Prom.nota3;
        cin.ignore();
    }
    for (int i = 0; i < numalumnos; ++i) {
            float promedio_alumno = (alumnos[i].Prom.nota1 + alumnos[i].Prom.nota2 + alumnos[i].Prom.nota3) / 3;
            cout << "Alumno " << i + 1 << " - " << alumnos[i].nombre << endl;
            cout << "Edad: " << alumnos[i].edad << endl;
            cout << "Sexo: " << alumnos[i].sexo << endl;
            cout << "Promedio: " << promedio_alumno << endl;
    }
    cin.get();
    return 0;
}