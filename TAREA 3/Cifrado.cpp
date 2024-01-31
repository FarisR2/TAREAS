#include <iostream>
#include <string>

using namespace std;

string cifradoCesar(const string& mensaje, int desplazamiento ){
    string mensajeCifrado = "";

    for( char caracter : mensaje ){
        if (isalpha(caracter)){
            int codigoAscii = static_cast<int>(caracter);
            bool esMayuscula = isupper(caracter);

            codigoAscii = (codigoAscii - (esMayuscula ? 'A' : 'a' ) + desplazamiento + 26 ) % 26 + (esMayuscula ? 'A' : 'a');
            mensajeCifrado += static_cast<int>(codigoAscii);

        } else {
            mensajeCifrado += caracter;
        }
    }

    return mensajeCifrado;

}

int main(){
    string mensajeOriginal;
    int desplazamiento;

    cout << "Ingrese el mensaje para cifrar: ";
    getline(cin, mensajeOriginal);
    cout << "Ingrese el desplazamiento: ";
    cin >> desplazamiento;

    string mensajeCifrado = cifradoCesar(mensajeOriginal,desplazamiento);
    cout << "Mensaje cifrado es: " << mensajeCifrado;

    return 0;
}

