#include <iostream>

using namespace std;

int main()
{
    string nombre;
    int kills, deaths, damagetotal;
    double asistencias, kda, dpk;
    bool FlgWinPartida = false;

    cout << "Ingresar Nombre: ";
    cin >> nombre;

    cout << "Ingresar Kills, Deaths y Daño Total: ";
    cin >> kills >> deaths >> damagetotal;

    // Obtener Calculos:
    asistencias = 0.30 * kills;

    // Controlas la Division entre Cero
    if (deaths > 0)
        kda = (kills + asistencias) / deaths;
    else
        kda = kills + asistencias;

    if (kills > 0)
        dpk = damagetotal / kills;
    else
    {
        dpk = damagetotal;
        cout << endl << "Sin Kills en la Partida!" << endl ;
    }

    // Determinando si gane la partida
    if (kills >= 5 && deaths <= 2)
        FlgWinPartida = true;


    cout << "RESULTADOS: " << endl;
    cout << "============" << endl;
    cout << "KDA: " << kda << endl;
    cout << "DPK: " << dpk << endl;
    cout << "ASISTENCIAS: " << asistencias << endl;

    //if (kills >= 5 && deaths <= 2)
    if (FlgWinPartida)
        cout << "RESULTADO FINAL: " << nombre << " GANASTE LA PARTIDA!";
    else
        cout << "RESULTADO FINAL: " << nombre << " PERDISTE!";

    return 0;
}
