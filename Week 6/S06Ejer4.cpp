#include <iostream>
using namespace std;

int main()
{
    double N;

    cout << "Ingresame un Nro: ";
    cin >> N;

    // Valor Absoluto... siempre el mismo numero pero en POSITIVO
    // ABS (+X) -> +X
    // ABS (-X) -> +X
    if (N < 0)
        N = N * (-1);

    cout << " El Valor Absoluto de |N| = " << N;

    return 0;
}
