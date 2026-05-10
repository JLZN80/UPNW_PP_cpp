#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int obtenerPrecioVBucks(int rareza) {
    switch (rareza) {
        case 1:
            return 500;
        case 2:
            return 800;
        case 3:
            return 1200;
        case 4:
            return 1500;
        case 5:
            return 2000;
        default:
            return -1;
    }
}

double convertirVBucksASoles(int vbucks) {
    return (vbucks / 1000.0) * 34.90;
}

int main() {
    string item;
    int rareza, precio, vbucksJugador;
    double precioSoles;

    cout << "=== FORTNITE: TIENDA DE SKINS ===" << endl;
    cout << "Ingrese nombre del item sin espacios: ";
    cin >> item;

    cout << "Ingrese rareza:" << endl;
}