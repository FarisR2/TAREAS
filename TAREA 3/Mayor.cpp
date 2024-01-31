#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {12, 5, 8, 23, 10, 17, 14, 30, 6, 19};

    int mayorElemento = numeros[0];

    for (size_t i = 1; i < numeros.size(); ++i) {
        if (numeros[i] > mayorElemento) {
            mayorElemento = numeros[i];
        }
    }

    cout << "Vector de números: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    cout << "El mayor elemento en el vector es: " << mayorElemento << endl;

    return 0;
}
