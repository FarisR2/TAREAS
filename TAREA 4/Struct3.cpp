#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Estudiante {
    string nombre;
    int calificaciones[5];  
};

int main() {
    int cantidadEstudiantes;

    cout << "Ingrese la cantidad de estudiantes: ";
    cin >> cantidadEstudiantes;

    vector<Estudiante> estudiantes(cantidadEstudiantes);

    for (int i = 0; i < cantidadEstudiantes; ++i) {
        cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        cin.ignore();  
        getline(cin, estudiantes[i].nombre);

        cout << "Ingrese las 5 calificaciones del estudiante " << i + 1 << " separadas por espacios: ";
        for (int j = 0; j < 5; ++j) {
            cin >> estudiantes[i].calificaciones[j];
        }
    }

    cout << "\nPromedio de calificaciones para cada estudiante:\n";
    for (int i = 0; i < cantidadEstudiantes; ++i) {
        double promedio = 0.0;
        for (int j = 0; j < 5; ++j) {
            promedio += estudiantes[i].calificaciones[j];
        }
        promedio /= 5.0;

        cout << "Estudiante " << i + 1 << " (" << estudiantes[i].nombre << "): ";
        cout << "Promedio = " << promedio << endl;
    }

    return 0;
}
