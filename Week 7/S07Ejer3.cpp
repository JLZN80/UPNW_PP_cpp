#include <iostream>

using namespace std;

int main()
{   int edad;

    cout << "Ingresa tu Edad: ";
    cin >> edad;

    if (edad < 18)
        cout << "Eres un Menor de Edad!";
    else
        if (edad >= 18 && edad <= 65)
            cout << "Eres un Mayor de Edad!";
        else
            cout << "Eres un Adulto Mayor!";

    return 0;
}
