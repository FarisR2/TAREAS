/*Matriz Transpuesta: Crea un programa que solicite al usuario ingresar los elementos de una matriz cuadrada. 
Luego, calcula la matriz transpuesta e imprímela en la pantalla.*/

#include <iostream>


using namespace std;

int main(){
    
    int numeros[3][3];

    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << "Digite un numero ["<<i<<"]"<<"["<<j<<"]: "; 
            cin >> numeros[i][j];
        }
        
    }

    cout << "Matriz Original\n";
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << numeros[i][j];
        }
            cout << "\n";
    }
    
    cout << "Matriz Transpuesta \n";
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            cout << numeros[j][i];
        }
        cout << "\n";
    }
    

    return 0;
}