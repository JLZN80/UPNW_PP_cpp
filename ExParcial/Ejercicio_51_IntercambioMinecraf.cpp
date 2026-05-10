#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void intercambiarItems(string &item1, int &cantidad1, string &item2, int &cantidad2) {
    string tempItem = item1;
    int tempCantidad = cantidad1;

    item1 = item2;
    cantidad1 = cantidad2;

    item2 = tempItem;
    cantidad2 = tempCantidad;
}

void calcularPesoTotal(string items[], int cantidades[], int n, double &pesoTotal) {
    pesoTotal = 0;

    for (int i = 0; i < n; i++) {
        pesoTotal = pesoTotal + (cantidades[i] * 0.25);
    }
}

int main() {
    string item1 = "Diamante";
    int cantidad1 = 12;
    string item2 = "Esmeralda";
    int cantidad2 = 7;

    string items[4] = {"Piedra", "Madera", "Hierro", "Carbon"};
    int cantidades[4] = {30, 20, 10, 15};
    double pesoTotal;

    cout << "=== MINECRAFT: SWAP DE INVENTARIO ===" << endl;
    cout << "Antes del intercambio:" << endl;

    system("pause");    
}