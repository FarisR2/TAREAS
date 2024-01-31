#include <iostream>
#include <string.h>

using namespace std;

int main(){

    string palabraUno[2][2];
    string palabraDos[2][2];
    string resultado[2];

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++){
            cout << "Escriba la primera palabra que desea compilar al programa ["<< i <<"]" << "["<<j<<"]: ";
            cin >> palabraUno[i][j]; 
        }
    }
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++){
            cout << "Escriba la segunda palabra que desea compilar al programa ["<< i <<"]" << " ["<<j<<"]: ";
            cin >> palabraDos[i][j]; 
        }
    }
    
    for (size_t i = 0; i < 2; i++) {
        resultado[i] = palabraUno[i][0] + " " + palabraUno[i][1] + " " +
                       palabraDos[i][0] + " " + palabraDos[i][1];
    }


    cout << "1.- Matriz Original\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << palabraUno[i][j] << " ";
        }
            cout << "\n";
    }
    cout << "2.- Matriz Original\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << palabraDos[i][j] << " ";
        }
            cout << "\n";
    }
    

    cout << "Matriz resultado (concatenación de palabras por fila):\n";
    for (size_t i = 0; i < 2; i++) {
        cout << resultado[i] << "\n";
    }

    return 0;
}


