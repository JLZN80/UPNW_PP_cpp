#include <iostream>
using namespace std;


struct Producto {
    int Codigo;
    int Stock;
};

int main() {

    Producto Inventario[5] = { {101,5}, {201,3}, {301,1}, {401,10}, {501,8} };

    int CodProd;

    // Buscar un determinado producto...
    cout << "Ingrese el Codigo a Buscar: ";
    cin >> CodProd;

    // Recorrer mi Arreglo de estructuras...
    for (int i=0; i<5; i++) {
        if (Inventario[i].Codigo == CodProd) {
            cout << "Queda en Stock de este producto: " << Inventario[i].Stock;
            break;
        }
    }

    system("pause");
    return 0;

}