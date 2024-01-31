#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int cantidad;

    cout << "Ingrese la cantidad de cuantas palabras pondrá para concatenarlas: "; cin >> cantidad;



    string palabras[cantidad];
    string resultado;



    for (size_t i = 0; i < cantidad; i++)
    {
        cout <<  "Ingrese la " << i + 1 << " oración para concatenar: ";
        cin >> palabras[i];

        resultado += palabras[i];

    }

    cout << resultado;
    

}