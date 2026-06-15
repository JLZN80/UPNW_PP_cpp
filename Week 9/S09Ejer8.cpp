#include <iostream>

using namespace std;

int main()
{
    int Numero;
    int Multiplo;

    cout << "Ingresa el Nro para Elaborar la Tabla de Multiplicar Dinamica: ";
    cin >> Numero;

    for (int i=1; i<=12; i++) {
        Multiplo = i * Numero;
        cout << i << " x " << Numero << " = " << Multiplo << endl;
    }

    return 0;
}
