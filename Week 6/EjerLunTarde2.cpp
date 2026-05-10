#include <iostream>
using namespace std;

int main()
{
    double Num, Denom, C;

    cout << "Ingresa el Numerador: ";
    cin >> Num;

    cout << "Ingresa el Denominador: ";
    cin >> Denom;

    if (Denom == 0) {
        cout << "Mensaje de Error: El DENOMINADOR NO PUEDE SER CERO!";
    } else {
        C = Num / Denom;
        cout << "El Resultado de Dividir es: " << C;
    }

    return 0;
}
