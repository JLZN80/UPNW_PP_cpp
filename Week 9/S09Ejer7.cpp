#include <iostream>

using namespace std;

int main()
{
    int Nro;

    cout << "Ingresame un Nro Entero Positivo: ";
    cin >> Nro;

    if (Nro <= 0)
        cout << "Error: Debes Ingresar un numero positivo!";
    else {
        // for -> Conozco la cantidad de veces a repertirse
        for (int i = Nro; i >= 1; i--) {// FOR INVERTIDO
                cout << i << endl;
        }
        cout << "... DESPEGUE!!!!";
    }
    return 0;
}
