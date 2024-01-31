#include <iostream>
#include <algorithm>
using namespace std;

void ascendenteN( int numeros[], int );


int main(){

    int cantidad;

    cout << "Ingrese la cantidad de cuantos numeros enteros pondra: "; cin >> cantidad;

    int numeros[cantidad];
    int resultado;

    for (size_t i = 0; i < cantidad; i++)
    {
        cout << "Ingrese el " << i + 1 << " numero: ";
        cin >> numeros[i];

    }   

    ascendenteN(numeros, cantidad);
    
    return 0;

}


void ascendenteN(int numeros[], int cantidad) {
    sort(numeros, numeros + cantidad);

    cout << "Los números en orden ascendente son: ";
    for (int i = 0; i < cantidad; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;
}