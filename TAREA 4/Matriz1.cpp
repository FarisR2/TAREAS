#include <iostream>

using namespace std;

int main()
{

    int matriz1[2][2];
    int matriz2[2][2];

    int resultado[2][2];

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << "Digite un numero  para la primera matriz [" << i << "]" << "[" << j << "]: ";
            cin >> matriz1[i][j];
        }
    }
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << "Digite un numero para la segunda matriz [" << i << "]"
                 << "[" << j << "]: ";
            cin >> matriz2[i][j];
        }
    }

    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            resultado[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    cout << "1.- Matriz Original\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << matriz1[i][j];
        }
            cout << "\n";
    }
    cout << "2.- Matriz Original\n";
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << matriz2[i][j];
        }
            cout << "\n";
    }
    

    cout << "Matriz resultado:" << endl;
    for (size_t i = 0; i < 2; i++)
    {
        for (size_t j = 0; j < 2; j++)
        {
            cout << resultado[i][j] << " ";

        }

        cout << endl;
    }

    return 0;
}