#include <iostream>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    double precioUnitario;
    int cantidad;
};

int main() {
    Producto p;
    double total;

    cout << "Producto comprado: ";
    cin >> p.nombre;

    cout << "Precio unitario: S/ ";
    cin >> p.precioUnitario;

    cout << "Cantidad: ";
    cin >> p.cantidad;

    total = p.precioUnitario * p.cantidad;

    cout << "\n--- RESUMEN DEL PEDIDO ---" << endl;
    cout << "Producto: " << p.nombre << endl;
    cout << "Precio unitario: S/ " << p.precioUnitario << endl;
    cout << "Cantidad: " << p.cantidad << endl;
    cout << "Total a pagar: S/ " << total << endl;

    return 0;
}
