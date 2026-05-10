#include <iostream>
#include <string>
using namespace std;

int calcularNivel(double xpTotal) {
    int nivel = (int)(xpTotal / 500) + 1;

    if (nivel > 18) {
        nivel = 18;
    }

    return nivel;
}

double calcularXpSiguiente(int nivelActual) {
    if (nivelActual == 18) {
        return 0;
    }

    return (nivelActual + 1) * 500;
}

string obtenerTitulo(int nivel) {
    if (nivel >= 1 && nivel <= 5) {
        return "Aprendiz";
    } else if (nivel >= 6 && nivel <= 11) {
        return "Veterano";
    } else if (nivel >= 12 && nivel <= 17) {
        return "Leyenda";
    } else {
        return "Maestro Supremo";
    }
}

int main() {
    string campeon;
    double xpTotal, xpSiguiente;
    int nivel;
    string titulo;

    cout << "=== LEAGUE OF LEGENDS: SISTEMA DE NIVEL ===" << endl;
    cout << "Ingrese nombre del campeon sin espacios: ";
    cin >> campeon;

    cout << "Ingrese XP total: ";
    cin >> xpTotal;

    nivel = calcularNivel(xpTotal);
    xpSiguiente = calcularXpSiguiente(nivel);
    titulo = obtenerTitulo(nivel);

    cout << "\nCampeon " << campeon << ": Nivel " << nivel
         << " - " << titulo
         << " | XP para siguiente nivel: " << xpSiguiente << endl;

    system("pause");
    return 0;
}