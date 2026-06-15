// PREGUNTA 2: Calculadora de Apps de Estudio
// Lenguaje: C++ para Code::Blocks
// Objetivo: pedir el nombre y costo mensual de 3 aplicaciones educativas,
// calcular el total mensual, el total anual y los días de ahorro necesarios.

#include <iostream>
#include <iomanip>   // Permite usar fixed y setprecision(2)
#include <string>    // Permite usar variables de tipo string

using namespace std;

int main() {
    // Declaración de variables para nombres de aplicaciones
    string app1, app2, app3;

    // Declaración de variables para costos mensuales
    double costo1, costo2, costo3;

    // Variables de cálculo
    double totalMensual, totalAnual;
    int diasAhorro;

    // Constante del ahorro diario solicitado por el enunciado
    const int AHORRO_DIARIO = 40;

    // Entrada de datos: nombre y costo de cada aplicación
    cout << "Ingrese el nombre de la primera app educativa: ";
    getline(cin, app1);
    cout << "Ingrese el costo mensual de " << app1 << " en S/.: ";
    cin >> costo1;
    cin.ignore(); // Limpia el salto de línea antes del siguiente getline

    cout << "Ingrese el nombre de la segunda app educativa: ";
    getline(cin, app2);
    cout << "Ingrese el costo mensual de " << app2 << " en S/.: ";
    cin >> costo2;
    cin.ignore();

    cout << "Ingrese el nombre de la tercera app educativa: ";
    getline(cin, app3);
    cout << "Ingrese el costo mensual de " << app3 << " en S/.: ";
    cin >> costo3;

    // Cálculos solicitados
    totalMensual = costo1 + costo2 + costo3;
    totalAnual = totalMensual * 12;

    // División entera solicitada por el examen.
    // Al convertir totalAnual a int, se obtiene un número entero de días.
    // Si el total anual no es múltiplo exacto de 40, este cálculo deja la parte decimal.
    diasAhorro = static_cast<int>(totalAnual) / AHORRO_DIARIO;

    // Salida con dos decimales usando fixed y setprecision(2)
    cout << fixed << setprecision(2);
    cout << "\n===== RESUMEN DE APPS DE ESTUDIO =====" << endl;
    cout << app1 << ": S/." << costo1 << " mensual" << endl;
    cout << app2 << ": S/." << costo2 << " mensual" << endl;
    cout << app3 << ": S/." << costo3 << " mensual" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Total mensual: S/." << totalMensual << endl;
    cout << "Total anual: S/." << totalAnual << endl;
    cout << "Dias de ahorro necesarios con S/.40 diarios: " << diasAhorro << " dias" << endl;

    return 0;
}
