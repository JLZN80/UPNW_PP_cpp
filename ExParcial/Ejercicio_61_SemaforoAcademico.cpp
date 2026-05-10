#include <iostream>
#include <string>
using namespace std;

string evaluarEstadoAcademico(double promedio, int creditos) {
    if (promedio >= 15 && creditos >= 16) {
        return "Excelente - Merito academico";
    } else if (promedio >= 13 && creditos >= 12) {
        return "Aprobado - Buen ciclo";
    } else if (promedio >= 11) {
        return "Aprobado - Rendimiento basico";
    } else if (promedio >= 8 && creditos < 12) {
        return "En riesgo - Consejeria academica";
    } else {
        return "Desaprobado - Repetir el ciclo";
    }
}

int main() {
    string alumno;
    double promedio;
    int creditos;
    string estado;

    cout << "=== APP UNIVERSITARIA: ESTADO ACADEMICO ===" << endl;
    cout << "Ingrese nombre del alumno sin espacios: ";
    cin >> alumno;

    cout << "Ingrese promedio ponderado: ";
    cin >> promedio;

    cout << "Ingrese creditos cursados: ";
    cin >> creditos;

    estado = evaluarEstadoAcademico(promedio, creditos);

}