#include <iostream>

using namespace std;

int main() {
    int numero;

    do {
        cout << "Ingrese un numero par: ";
        cin >> numero;

        cout << "Secuencia Collatz para: " << numero << endl;

        while (numero != 1) {
            if (numero % 2 == 0) {
                numero /= 2;
            } else {
                numero = 3 * numero + 1;
            }

            cout << numero << " ";
        }

        cout << "\nLa secuencia ha llegado a 1." << endl;

    } while (numero == 1);

    return 0;
}
