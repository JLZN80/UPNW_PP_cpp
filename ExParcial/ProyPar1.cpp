#include <iostream>

using namespace std;

int main()
{
    string NomJug;
    int k, d, DT;
    double assist, KDA;
    double DTP, DPK;

    cout << "Ingresame los datos: Nombre, Kills, Deaths y Daño Total: ";
    cin >> NomJug, k, d, DT;

    assist = k * 0.30; // Asistencias = 30% de los Kills
    KDA = (k + assist) / d;

    // SI ha habido Kills
    if (k > 0) {
        DPK = DT / k;
    } else
        cout << "Sin Kills esta partida!" << endl;

    cout << "RESUMEN" << endl;
    cout << "==========================" << endl;
    cout << "Asistencias: " << assist << endl;
    cout << "KDA: " << KDA << endl;
    cout << "DPK: " << DPK << endl;

    // Resultado Final de la Partida (tengo al menos 5 kills Y mori a lo mas 2 veces
    if (k >= 5 && d <= 2)
        cout << "Resultado: GANE LA PARTIDA!";
    else
        cout << "Resultado: PERDI LA PARTIDA!";

    return 0;
}
