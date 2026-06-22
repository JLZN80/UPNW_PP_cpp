#include <iostream>
#include <string>
using namespace std;

struct Deportista {
    string nombre;
    double tiempo;
};

int main() {
    Deportista d;

    cout << "Nombre del deportista: ";
    cin >> d.nombre;
    cout << "Tiempo en 100m: ";
    cin >> d.tiempo;

    cout << "Registrado: " << d.nombre << " (" << d.tiempo << " s)" << endl;
    system("pause");
    return 0;
}
