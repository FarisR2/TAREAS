#include <iostream>
#include <cctype> 

using namespace std;

int main() {
    string oracion;

    cout << "Ingrese una oración: ";
    getline(cin, oracion);

    int conteoA = 0, conteoE = 0, conteoI = 0, conteoO = 0, conteoU = 0;

    for (char caracter : oracion) {
        char caracterMinuscula = tolower(caracter);

        switch (caracterMinuscula) {
            case 'a':
                ++conteoA;
                break;
            case 'e':
                ++conteoE;
                break;
            case 'i':
                ++conteoI;
                break;
            case 'o':
                ++conteoO;
                break;
            case 'u':
                ++conteoU;
                break;
        }
    }

    cout << "Cantidad de vocales en la oración:" << endl;
    cout << "A: " << conteoA << endl;
    cout << "E: " << conteoE << endl;
    cout << "I: " << conteoI << endl;
    cout << "O: " << conteoO << endl;
    cout << "U: " << conteoU << endl;

    return 0;
}
