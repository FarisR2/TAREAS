#include <iostream>
#include <string>

using namespace std;

void toLowerCase(string &str) {
    for (char &c : str) {
        c = tolower(c);
    }
}

string salir() {
    cout << "Saliste del juego" << endl;
    return "Saliste del Juego";
}

void juegoPreguntas() {
    cout << "¡Bienvenido al Juego de Preguntas!" << endl;

    string respuestaUsuario = "";
    int respuestasCorrectas = 0;
    int respuestasIncorrectas = 0;
    cout << "¿La suma de todos los ángulos de un triángulo es 180 grados?: ";
    cin >> respuestaUsuario;
    toLowerCase(respuestaUsuario);

    if (respuestaUsuario == "verdadero") {
        cout << "La respuesta es correcta" << endl;
        respuestasCorrectas++;
    } else {
        cout << "La respuesta es incorrecta" << endl;
        respuestasIncorrectas++;
    }

    cout << "¿Los murciélagos son mamíferos voladores?: ";
    cin >> respuestaUsuario;
    toLowerCase(respuestaUsuario);

    if (respuestaUsuario == "verdadero") {
        cout << "La respuesta es correcta" << endl;
        respuestasCorrectas++;
    } else {
        cout << "La respuesta es incorrecta" << endl;
        respuestasIncorrectas++;
    }

    cout << "¿La Tierra es plana? (verdadero o falso): ";
    cin >> respuestaUsuario;
    toLowerCase(respuestaUsuario);

    if (respuestaUsuario == "falso") {
        cout << "La respuesta es correcta" << endl;
        respuestasCorrectas++;
    } else {
        cout << "La respuesta es incorrecta" << endl;
        respuestasIncorrectas++;
    }
    cout << "¿El ser humano puede respirar bajo el agua? (verdadero o falso): ";
    cin >> respuestaUsuario;
    toLowerCase(respuestaUsuario);

    if (respuestaUsuario == "falso") {
        cout << "La respuesta es correcta" << endl;
        respuestasCorrectas++;
    } else {
        cout << "La respuesta es incorrecta" << endl;
        respuestasIncorrectas++;
    }
    cout << "¿La luna emite luz propia? (verdadero o falso): ";
    cin >> respuestaUsuario;
    toLowerCase(respuestaUsuario);

    if (respuestaUsuario == "falso") {
        cout << "La respuesta es correcta" << endl;
        respuestasCorrectas++;
    } else {
        cout << "La respuesta es incorrecta" << endl;
        respuestasIncorrectas++;
    }
    cout << "¿El hielo flota en el agua porque es más denso? (verdadero o falso): ";
    cin >> respuestaUsuario;
    toLowerCase(respuestaUsuario);

    if (respuestaUsuario == "verdadero") {
        cout << "La respuesta es correcta" << endl;
        respuestasCorrectas++;
    } else {
        cout << "La respuesta es incorrecta" << endl;
        respuestasIncorrectas++;
    }

    cout << "Fin del juego de preguntas." << endl;
    cout << "Respuestas correctas: " << respuestasCorrectas << endl;
    cout << "Respuestas incorrectas: " << respuestasIncorrectas << endl;
}
   



int main()
{
    int decision = 0;

    cout << "Bienvenido al Juego de Preguntas\n";
    cout << "1. Jugar" << endl;
    cout << "2. Salir\n";
    cout << "Seleccione una opción: ";
    cin >> decision;

    switch (decision)
    {
    case 1:
        juegoPreguntas();
        break;

    case 2:
        salir();
        break;

    default:
        cout << "Opción no válida. Saliendo del juego.\n";
        break;
    }

    return 0;
}
