#include <iostream>
#include <string>
 
using namespace std;
 
struct Jugador {
    string nombre;
    string pais;
    int goles;
};
 
int main() {
 
    // INICIALIZANDO EL ARREGLO  DE ESTRUCTURAS:

    // Jugador goleadores[5];    
    // goleadores[0] = {"Haaland", "Noruega", 4};
    // goleadores[1] = {"Lewandowski", "Polonia", 3};
    // ... por cada fila del arreglo

    // DECLARACION E INICIALIZACION DEL ARREGLO
    Jugador goleadores[5] = {
        {"Haaland", "Noruega", 4},
        {"Lewandowski", "Polonia", 3},
        {"Mbappe", "Francia", 2},
        {"Lautaro", "Argentina", 2},
        {"Vinicius", "Brasil", 1}
    };
 
    // REPORTE DE GOLEADORES
    cout << "Tabla de goleadores MUNDIAL  2026" << endl;
    cout << "---------------------------------" << endl;
    cout << "Nombre\t\tPais\t\tGoles" << endl;
    cout << "---------------------------------" << endl;
 
    // RECORRIDO DEL ARREGLO DE ESTRUCTURAS. USO FOR PORQUE CONOZCO EL TAMAÑo (5)
    for (int i = 0; i < 5; i++) {
        cout << goleadores[i].nombre << "\t\t"
             << goleadores[i].pais << "\t\t"
             << goleadores[i].goles << endl;
    }
 
    system("pause");
    return 0;
}