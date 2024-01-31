#include <iostream>
#include <string.h>

using namespace std;

int main(){

    struct Alumno{

        string nombre;
        int edad;
        int calificacion;
    };

    

    int cantidad;
    cout << "Ingrese la cantidad de estudiantes ingresara su informacion: "; cin >> cantidad;

    Alumno estudiante [cantidad];
    
    for (int i = 0; i < cantidad; i++)
    {
           
    cout << "Ingrese el nombre del " << i + 1 << " estudiante: "<< endl; cin >> estudiante[i].nombre;
    cout << "Ingrese la edad del " << i + 1 << " estudiante: " << endl; cin >> estudiante[i].edad;
    cout << "Ingrese la calificacion del " << i + 1 << " estudiante: " << endl; cin >> estudiante[i].calificacion;


    }
    
    cout << "\nNombres\t\tEdades\t\tCalificaciones\n";
    for (int i = 0; i < cantidad; i++) {
        cout << estudiante[i].nombre << "\t\t" << estudiante[i].edad << "\t\t" << estudiante[i].calificacion << "\n";
    }

    return 0;
}