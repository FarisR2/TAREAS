/* Manejo de Arreglos: Escribe un programa que solicite al usuario ingresar 10 números enteros. 
Luego, encuentra el promedio de los números ingresados y muestra cuántos números son mayores que el promedio.*/

#include <iostream>

using namespace std;

int main()
{
    const int num = 10;
    int numeros[num];
    int suma = 0;

    for (size_t i = 0; i < num; i++)
    {
        cout << "Ingrese el numero " << i + 1 << ": ";
        cin >> numeros[i];
        suma += numeros[i]; // Almacenara toda la suma del cin
    }

    double promedio = suma / 1.0 / num; // el 1.0 se pone para que el resultado sea más preciso

    cout << "El promedio de los numeros ingresados es: " << promedio << endl;

    int mayorPromedio = 0;

    for (size_t i = 0; i < num; i++)
    {
        if (numeros[i] > mayorPromedio)
        {
            mayorPromedio++; // En cuanto encuentre un numero mayor al promedio sumara + 1 //
        }
   }
    
    cout << "Numero mayor al promedio: " << mayorPromedio;

}
