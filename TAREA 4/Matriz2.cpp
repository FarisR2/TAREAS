#include <iostream>

using namespace std;

int main()
{

    int primero[2][2];
    int segundo[2][2];

    int resultado[2][2];

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << "Digite un numero para la primera matriz [" << i << "]"
                 << "[" << j << "]: ";
            cin >> primero[i][j];
        }
    }

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << "Digite un numero para la primera matriz [" << i << "]"
                 << "[" << j << "]: ";
            cin >> segundo[i][j];
        }
    }
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            resultado[i][j] = primero[i][j] * segundo[i][j];
        }
    }

    cout << "1.- Matriz Original\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << primero[i][j];
        }
        cout << "\n";
    }

    cout << "2.- Matriz Original\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << segundo[i][j];
        }

        cout << "\n";
    }

    cout << "Matriz Resultante\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << resultado[i][j];
        }

        cout << endl;
    }

    return 0;
}