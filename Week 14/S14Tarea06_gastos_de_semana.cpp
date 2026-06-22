#include <iostream>
#include <string>
using namespace std;

struct Gasto {
    string descripcion;
    double monto;
};

int main() {
    const int SIZE = 5;
    Gasto gastos[SIZE];
    double total = 0;
    double promedio;

    for (int i = 0; i < SIZE; i++) {
        cout << "Gasto " << i + 1 << " descripcion: ";
        cin >> gastos[i].descripcion;

        cout << "Gasto " << i + 1 << " monto: S/ ";
        cin >> gastos[i].monto;

        total += gastos[i].monto; // Acumulador: suma todos los montos.
    }

    promedio = total / SIZE;

    cout << "\n--- REPORTE DE GASTOS ---" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << gastos[i].descripcion << ": S/ " << gastos[i].monto << endl;
    }

    cout << "Total gastado: S/ " << total << endl;
    cout << "Promedio por gasto: S/ " << promedio << endl;

    return 0;
}
