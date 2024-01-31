#include <iostream>
#include <vector>

using namespace std;

bool esPrimo(int numero) {
    if (numero <= 1) {
        return false;
    }

    for (int i = 2; i * i <= numero; ++i) {
        if (numero % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int inicio, fin;

    cout << "Ingrese el número de inicio: ";
    cin >> inicio;

    cout << "Ingrese el número de fin: ";
    cin >> fin;

  
    if (inicio > fin) {
        cout << "Error: El número de inicio debe ser menor o igual al número de fin." << endl;
        return 1;  
    }

    vector<int> primos;

    for (int num = inicio; num <= fin; ++num) {
        if (!esPrimo(num)) {
            continue;
        }

        primos.push_back(num);
    }

    cout << "Números primos en el rango [" << inicio << ", " << fin << "]: ";
    for (int primo : primos) {
        cout << primo << " ";
    }
    cout << endl;

    return 0;
}
