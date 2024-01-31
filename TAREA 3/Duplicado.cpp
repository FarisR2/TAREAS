#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> numeros = {1, 2, 3, 2, 4, 5, 6, 1, 7, 8, 9, 4, 10};

    cout << "Vector original: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    for (size_t i = 0; i < numeros.size(); ++i) {
        for (size_t j = i + 1; j < numeros.size();) {
            if (numeros[i] == numeros[j]) {
                numeros.erase(numeros.begin() + j);
            } else {
                ++j;
            }
        }
    }

    cout << "Vector sin duplicados: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
