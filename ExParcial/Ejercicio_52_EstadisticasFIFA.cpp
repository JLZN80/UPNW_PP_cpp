#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void calcularEstadisticas(int golesFavor, int golesContra,
                          double &promGF, double &promGC, int &diferencia) {
    const int PARTIDOS = 5;

    promGF = golesFavor / (double)PARTIDOS;
    promGC = golesContra / (double)PARTIDOS;
    diferencia = golesFavor - golesContra;
}

string evaluarRendimiento(int diferencia) {
    if (diferencia > 5) {
        return "Dominante";
    } else if (diferencia >= 1) {
        return "Positivo";
    } else if (diferencia == 0) {
        return "Equilibrado";
    } else {
        return "Critico";
    }
}

int main() {
    string equipo;
    int golesFavor, golesContra, diferencia;
    double promGF, promGC;
    string rendimiento;

    cout << "=== FIFA: ANALISIS DE TORNEO ===" << endl;
    cout << "Ingrese nombre del equipo sin espacios: ";
    cin >> equipo;

    system("pause");

}