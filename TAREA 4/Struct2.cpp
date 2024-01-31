#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Libro {
    string titulo;
    string autor;
    int anioPublicacion;
};

int main() {
    int cantidadLibros;

    cout << "Ingrese la cantidad de libros: ";
    cin >> cantidadLibros;

    vector<Libro> biblioteca(cantidadLibros);

    for (int i = 0; i < cantidadLibros; ++i) {
        cout << "Ingrese información para el Libro " << i + 1 << ":\n";
        cout << "Título: ";
        cin.ignore(); 
        getline(cin, biblioteca[i].titulo);

        cout << "Autor: ";
        getline(cin, biblioteca[i].autor);

        cout << "Año de publicación: ";
        cin >> biblioteca[i].anioPublicacion;
    }

    cout << "\nInformación de todos los libros:\n";
    for (int i = 0; i < cantidadLibros; ++i) {
        cout << "Libro " << i + 1 << ":\n";
        cout << "Título: " << biblioteca[i].titulo << endl;
        cout << "Autor: " << biblioteca[i].autor << endl;
        cout << "Año de publicación: " << biblioteca[i].anioPublicacion << endl << endl;
    }

    return 0;
}
