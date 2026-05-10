#include <iostream>
#include <string>
using namespace std;

int main() {
    string usuario, pelicula, clasificacion;
    int edad, edadMinima = 0;
    bool clasificacionValida = true;

    cout << "=== NETFLIX: CLASIFICADOR DE PELICULAS ===" << endl;
    cout << "Ingrese nombre del usuario: ";
    cin >> usuario;

    cout << "Ingrese edad: ";
    cin >> edad;

    cout << "Ingrese nombre de la pelicula sin espacios: ";
    cin >> pelicula;

    cout << "Ingrese clasificacion (G, PG, PG13, R, NC17): ";
    cin >> clasificacion;

    if (clasificacion == "G") {
        edadMinima = 0;
    } else if (clasificacion == "PG") {
        edadMinima = 0;
    } else if (clasificacion == "PG13") {
        edadMinima = 13;
    } else if (clasificacion == "R") {
        edadMinima = 17;
    } else if (clasificacion == "NC17") {
        edadMinima = 18;
    } else {
        clasificacionValida = false;
    }

    cout << "\n=== RESULTADO ===" << endl;

    if (!clasificacionValida) {
        cout << "Clasificacion no reconocida." << endl;
    } else {
        if (edad >= edadMinima) {
            cout << "Hola, " << usuario << ". Disfruta " << pelicula << "!" << endl;
        } else {
            int faltan = edadMinima - edad;
            cout << "Contenido restringido. Necesitas " << faltan << " anios mas." << endl;
        }
    }

    system("pause");
    return 0;
}