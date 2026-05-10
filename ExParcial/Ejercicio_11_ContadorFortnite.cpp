#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string jugador;
    int kills, deaths;
    double danioTotal, asistencias, kda;

    // ENTRADA
    cout << "=== FORTNITE: ESTADISTICAS DE PARTIDA ===" << endl;
    cout << "Ingrese el nombre del jugador: ";
    cin >> jugador;

    cout << "Ingrese kills: ";
    cin >> kills;

    cout << "Ingrese muertes propias (deaths): ";
    cin >> deaths;

    cout << "Ingrese danio total infligido: ";
    cin >> danioTotal;

    // PROCESO
    asistencias = kills * 0.3;

    if (deaths > 0) {
        kda = (kills + asistencias) / deaths;
    } else {
        kda = kills + asistencias;
    }

    // SALIDA
    cout << fixed << setprecision(2);
    cout << "\n=== RESUMEN DE PARTIDA ===" << endl;
    cout << "Jugador: " << jugador << endl;
    cout << "Kills: " << kills << endl;
    cout << "Deaths: " << deaths << endl;
    cout << "Asistencias estimadas: " << asistencias << endl;
    cout << "KDA: " << kda << endl;

    if (kills > 0) {
        double danioPromedio = danioTotal / kills;
        cout << "Danio promedio por kill: " << danioPromedio << endl;
    } else {
        cout << "Sin kills esta partida." << endl;
    }

    if (kills >= 5 && deaths <= 2) {
        cout << "Resultado: Gano la partida." << endl;
    } else {
        cout << "Resultado: No gano la partida." << endl;
    }

    system("pause");
    return 0;
}