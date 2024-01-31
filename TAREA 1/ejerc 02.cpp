#include <iostream>

using namespace std;

int main() {

    int num1;

    cout << "Ingrese el numero para su tabla de multiplicacion: ";
    cin >> num1;

    int calculadora = 1;

    while ( calculadora <= 10)
    {
        int resultado = num1 * calculadora;
        cout << num1 << " x " << calculadora << " es " << resultado << endl;
        calculadora++;
    }
    
    return 0;
}