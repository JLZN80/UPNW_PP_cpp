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

    cout << "Nombre: ";
    cin >> e.nombre;
    cout << "Edad: ";
    cin >> e.edad;
    cout << "Promedio: ";
    cin >> e.promedio;

    cout << "Ficha registrada: " << e.nombre << ", " << e.edad
         << " anios, promedio " << e.promedio << endl;

    system("pause");
    return 0;
}
