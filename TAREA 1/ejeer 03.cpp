#include <iostream>

using namespace std;

int main() {
    int numero;
    cout << "Ingrese un numero para detectar si es par o impar: ";
    cin >> numero;

    if (numero % 2 == 0) {
        cout << numero << " Es par" << endl;
    } else {
        cout << numero << " Es impar" << endl;
    }

    return 0;
}
