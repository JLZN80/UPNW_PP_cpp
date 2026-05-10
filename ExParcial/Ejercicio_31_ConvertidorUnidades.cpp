#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    double velocidadMS, distanciaMetros, velocidadKMH, velocidadMPH;
    double distanciaPies, distanciaYardas, tiempoObjetivo;
    string jugador, clasificacion;
    double kd;

    cout << "=== WARZONE: CONVERSOR DE ESTADISTICAS ===" << endl;
    cout << "Ingrese velocidad del personaje en m/s: ";
    cin >> velocidadMS;

    cout << "Ingrese distancia del disparo en metros: ";
    cin >> distanciaMetros;

    cout << "Ingrese nombre del jugador sin espacios: ";
    cin >> jugador;

    cout << "Ingrese K/D ratio: ";
    cin >> kd;

    velocidadKMH = velocidadMS * 3.6;
    velocidadMPH = velocidadMS * 2.237;
    distanciaPies = distanciaMetros * 3.281;
    distanciaYardas = distanciaMetros * 1.094;
    tiempoObjetivo = distanciaMetros / velocidadMS;

    if (kd < 1.0) {
        clasificacion = "Novato";
    } else if (kd <= 1.9) {
        clasificacion = "Promedio";
    } else if (kd <= 2.9) {
        clasificacion = "Avanzado";
    } else {
        clasificacion = "Profesional";
    }

    cout << fixed << setprecision(2);
    cout << "\n=== RESULTADOS ===" << endl;
    cout << "Velocidad en km/h: " << velocidadKMH << endl;
    cout << "Velocidad en mph: " << velocidadMPH << endl;
    cout << "Distancia en pies: " << distanciaPies << endl;
    cout << "Distancia en yardas: " << distanciaYardas << endl;
    cout << "Tiempo en llegar al objetivo: " << tiempoObjetivo << " segundos" << endl;
    cout << "El jugador " << jugador << " tiene un K/D de " << kd
         << ", lo que lo clasifica como: " << clasificacion << endl;

    system("pause");
    return 0;
}