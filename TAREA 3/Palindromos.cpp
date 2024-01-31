/* Desarrolla un programa que verifique si una palabra ingresada por el usuario es un palíndromo 
(se lee igual de izquierda a derecha que de derecha a izquierda). Usa un bucle while o for para comparar los caracteres.*/

#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string palabra;
    string resultado;
    int i = 0;
    cout << "Ingrese una palabra: "; 
    cin >> palabra;
    for (i = palabra.size() - 1; i >= 0; i--)
    {
        cout << palabra[i] << endl;
        resultado += palabra[i];
    }

    cout << resultado << endl;;
    
    if(palabra == resultado) {
        cout << "Es palindromo la palabra: " << palabra << endl;
    } else {
        cout << "No es palindromo la palabra: " << palabra << endl;
    }


    return 0;
}