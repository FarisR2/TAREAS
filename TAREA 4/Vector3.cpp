#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <char> caracters = {'a','a', 'a', 'b','b', 'b', 'b', 'c','c','c','d','d','d','e','e','f','g','h','i','j','k','l','m','m','m','n','o','p','q','r','s','t','v','w','x','z' };

    char caracterDato;

    cout << "Ingrese un carácter:  "; 
    cin >> caracterDato;

    int contador = 0;

    for (size_t i = 0; i < caracters.size(); i++)
    {
     if ( caracterDato == caracters[i])
     {
        contador ++;
     }
        
    }
    
    cout << "El caracter " << caracterDato << " aparece " << contador << " veces en el vector";

    return 0;

}

