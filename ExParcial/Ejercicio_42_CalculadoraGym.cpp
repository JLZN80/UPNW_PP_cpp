#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

double calcularProteinasDiarias(double pesoKg, string objetivo) {
    if (objetivo == "Volumen") {
        return pesoKg * 2.2;
    } else if (objetivo == "Definicion") {
        return pesoKg * 2.0;
    } else if (objetivo == "Mantenimiento") {
        return pesoKg * 1.6;
    } else {
        cout << "Aviso: objetivo no reconocido. Se usara Mantenimiento." << endl;
        return pesoKg * 1.6;
    }
}

double calcularCalorias(double proteinas, double carbos, double grasas) {
    return (proteinas * 4) + (carbos * 4) + (grasas * 9);
}

int main() {
    string nombre, objetivo;
    double pesoKg, proteinas, carbos, grasas, calorias;

    cout << "=== GYMSHARK: CALCULADORA DE MACROS ===" << endl;
    cout << "Ingrese nombre del usuario: ";
    cin >> nombre;

    cout << "Ingrese peso en kg: ";
    cin >> pesoKg;

    cout << "Ingrese objetivo (Volumen, Definicion, Mantenimiento): ";
    cin >> objetivo;

    proteinas = calcularProteinasDiarias(pesoKg, objetivo);
    carbos = proteinas * 1.5;
    grasas = proteinas * 0.4;
    calorias = calcularCalorias(proteinas, carbos, grasas);

    cout << fixed << setprecision(1);
    cout << "\n=== RESULTADO NUTRICIONAL ===" << endl;
    cout << "Usuario: " << nombre << endl;
    cout << "Proteinas diarias: " << proteinas << " g" << endl;
    cout << "Carbohidratos diarios: " << carbos << " g" << endl;
    cout << "Grasas diarias: " << grasas << " g" << endl;
    cout << "Calorias totales: " << calorias << " kcal" << endl;

    system("pause");
    return 0;
}