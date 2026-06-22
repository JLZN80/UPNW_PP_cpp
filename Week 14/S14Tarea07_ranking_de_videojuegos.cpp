#include <iostream>
#include <string>
using namespace std;

struct Juego {
    string titulo;
    double calificacion;
};

int main() {
    const int SIZE = 3;
    Juego juegos[SIZE];
    int posicionMayor = 0; // Suponemos inicialmente que el primero es el mejor.

    for (int i = 0; i < SIZE; i++) {
        cout << "Juego " << i + 1 << " titulo: ";
        cin >> juegos[i].titulo;

        cout << "Calificacion (0 a 20): ";
        cin >> juegos[i].calificacion;
    }

    for (int i = 1; i < SIZE; i++) {
        if (juegos[i].calificacion > juegos[posicionMayor].calificacion) {
            posicionMayor = i;
        }
    }

    cout << "\nEl juego mejor calificado es: " << juegos[posicionMayor].titulo << endl;
    cout << "Calificacion: " << juegos[posicionMayor].calificacion << endl;

    return 0;
}
