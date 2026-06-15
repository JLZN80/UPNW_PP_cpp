#include <iostream>

using namespace std;

int main()
{
    // Detector de Numeros Primos
    // Primo: Solo es dividio por Si-mismo y por la Unidad (1) -> Solo tenga 2 Divisores

    int Numero;
    int NroDivisores = 0;

    cout << "Ingresame un Numero Entero Positivo: ";
    cin >> Numero;

    if (Numero <= 0)
        cout << "Error: Has ingresado un Numero Incorrecto!";
    else {
        for (int i = 1; i <= Numero; i++)
            if ((Numero % i) == 0) // Residuo = 0
                //NroDivisiores = NroDivisores + 1;
                NroDivisores++;
    }

    if (NroDivisores == 2)
        cout << "El Nro: " << Numero << " ES PRIMO!";
    else
        cout << "El Nro: " << Numero << " NO ES PRIMO! (Cantidad de Divisores: " << NroDivisores << ")";

    return 0;
}
