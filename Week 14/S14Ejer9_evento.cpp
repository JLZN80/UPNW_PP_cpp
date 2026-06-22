#include <iostream>
#include <string>
using namespace std;

struct Evento {
    string nombre;
    string lugar;
    int asistentes;
    double entrada;
};

int main() {
    Evento miEvento;

    miEvento.nombre = "Concierto Indie Fest";
    miEvento.lugar = "Parque de la Amistad";
    miEvento.asistentes = 250;
    miEvento.entrada = 35.50;

    cout << "Evento: " << miEvento.nombre << " en " << miEvento.lugar << endl;
    cout << "Asistentes esperados: " << miEvento.asistentes << endl;
    cout << "Entrada: S/ " << miEvento.entrada << endl;
    system("pause");
    return 0;
}
