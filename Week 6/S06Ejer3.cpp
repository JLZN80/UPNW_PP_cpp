#include <iostream>
using namespace std;

int main()
{
    int edad;

    cout << "Ingrese su edad: ";
    cin >> edad;

    if (edad >= 18){
            cout << "Usted es mayor de edad y puede votar";

    } else {
        // Escenario: edad < 18;
        cout << "Usted es monor edad no puede votar";
    }

    return 0;
}

