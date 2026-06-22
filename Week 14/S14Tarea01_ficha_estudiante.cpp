#include <iostream>
#include <string>
using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    double promedio;
};

int main() {
    Estudiante e;

    cout << "Nombre del estudiante: ";
    cin >> e.nombre; // Se usa cin porque el ejemplo espera un nombre sin espacios.

    cout << "Edad: ";
    cin >> e.edad;

    cout << "Promedio: ";
    cin >> e.promedio;

    cout << "\n--- FICHA REGISTRADA ---" << endl;
    cout << "Nombre: " << e.nombre << endl;
    cout << "Edad: " << e.edad << endl;
    cout << "Promedio: " << e.promedio << endl;

    return 0;
}
