#include <iostream>

using namespace std;

int main() {


    float resultado;

    int suma_o = 1;
    int resta_o = 2;
    int multiplicacion_o = 3;
    int division_o = 4;

    int opcion;

    float num1,num2;

    cout << "Elige el operador matematico\n (1) Suma\n (2) Resta\n (3) Multiplicacion\n (4) Division " << endl; cin >> opcion;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese dos numeros: "; 
            cin >> num1 >> num2;
            resultado = num1 + num2;
            cout << "Su resultado es: " << resultado;
            break;
        

        case 2:
            cout << "Ingrese dos numeros: "; 
            cin >> num1 >> num2;
            resultado = num1 - num2;
            cout << "Su resultado es: " << resultado;
            break;
        
        case 3:
            cout << "Ingrese dos numeros: "; 
            cin >> num1 >> num2;
            resultado = num1 * num2;
            cout << "Su resultado es: " << resultado;
            break;
        
        case 4:
            cout << "Ingrese dos numeros: "; 
            cin >> num1 >> num2;
            resultado = num1 / num2;
            cout << "Su resultado es: " << resultado;
            break;
        
        default:
        cout << "Opción no válida." << endl;
        break;

     }
    

    return 0;

}