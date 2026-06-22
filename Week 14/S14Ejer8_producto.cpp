#include <iostream>
#include <string>
using namespace std;

struct Producto {
    string nombre;
    double precio;
    int stock;
};

void mostrarProducto(Producto p) {
    cout << "Producto: " << p.nombre << endl;
    cout << "Precio: S/ " << p.precio << endl;
    cout << "Stock: " << p.stock << endl;
}

int main() {
    Producto audifonos = {"Audifonos", 89.90, 12};
    Producto teclado = {"Teclado", 120.50, 5};

    mostrarProducto(audifonos);
    cout << endl;
    mostrarProducto(teclado);
    
    system("pause");
    return 0;
}
