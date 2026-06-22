#include <iostream>
#include <string>
using namespace std;

struct Atleta {
    string nombre;
    double tiempo;
};

int main() {
    Atleta a;

    cout << "Nombre del atleta: ";
    cin >> a.nombre;

    cout << "Tiempo en 100 metros (segundos): ";
    cin >> a.tiempo;

    cout << "\nResultado de " << a.nombre << ": " << a.tiempo << " segundos." << endl;

    if (a.tiempo <= 12.0) {
        cout << "Marca sobresaliente para la competencia universitaria." << endl;
    } else {
        cout << "Marca registrada. Puede seguir entrenando para mejorar." << endl;
    }

    return 0;
}
