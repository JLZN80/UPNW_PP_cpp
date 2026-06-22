#include <iostream>
#include <string>
using namespace std;

struct Jugador {
    string nombre;
    int puntos;
};

int main() {
    const int SIZE = 4;
    Jugador jugadores[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Jugador " << i + 1 << " nombre: ";
        cin >> jugadores[i].nombre;

        cout << "Puntos: ";
        cin >> jugadores[i].puntos;
    }

    // Ordenamiento por seleccion descendente.
    // En cada vuelta buscamos al jugador con mayor puntaje restante.
    for (int start = 0; start < SIZE - 1; start++) {
        int posMayor = start;

        for (int i = start + 1; i < SIZE; i++) {
            if (jugadores[i].puntos > jugadores[posMayor].puntos) {
                posMayor = i;
            }
        }

        Jugador temp = jugadores[start];
        jugadores[start] = jugadores[posMayor];
        jugadores[posMayor] = temp;
    }

    cout << "\n--- RANKING FINAL ---" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << i + 1 << ". " << jugadores[i].nombre
             << " - " << jugadores[i].puntos << " puntos" << endl;
    }

    return 0;
}
