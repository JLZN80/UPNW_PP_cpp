#include <iostream>
#include <string>
using namespace std;

int main() {
    string estante[3][3] = {
        {"Lapices", "Lapiceros", "Goma"},
        {"Bulky", "Tijeras", "Cuadernos"},
        {"Bond", "Borrador", ""}
    };

    string buscar;
    bool encontrado = false;

    cout << "ESTANTE DE ARTICULOS" << endl;
    cout << "-----------------------------" << endl;

    cout << "        Col 1      Col 2      Col 3" << endl;

    for (int fila = 0; fila < 3; fila++) {
        cout << "Fila " << fila + 1 << "  ";

        for (int columna = 0; columna < 3; columna++) {
            cout << estante[fila][columna] << "      ";
        }

        cout << endl;
    }

    cout << "-----------------------------" << endl;

    cout << "Que articulo deseas buscar?: ";
    cin >> buscar;

    for (int fila = 0; fila < 3; fila++) {
        for (int columna = 0; columna < 3; columna++) {

            if (estante[fila][columna] == buscar) {
                cout << "El articulo " << buscar << " esta en:" << endl;
                cout << "Fila " << fila + 1 << endl;
                cout << "Columna " << columna + 1 << endl;

                encontrado = true;
            }
        }
    }

    if (encontrado == false) {
        cout << "El articulo no se encontro en el estante." << endl;
    }

    return 0;
}

