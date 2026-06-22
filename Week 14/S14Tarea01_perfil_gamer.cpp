#include <iostream>
#include <string>
using namespace std;

struct Videojuego {
    string titulo;
    string genero;
    int horasJugadas;
    double precio;
};

int main() {
    Videojuego favorito;

    favorito.titulo = "Rocket League";
    favorito.genero = "Deportes";
    favorito.horasJugadas = 120;
    favorito.precio = 0.00;

    cout << "--- FICHA DEL VIDEOJUEGO ---" << endl;
    cout << "Titulo: " << favorito.titulo << endl;
    cout << "Genero: " << favorito.genero << endl;
    cout << "Horas jugadas: " << favorito.horasJugadas << endl;
    cout << "Precio: S/ " << favorito.precio << endl;

    return 0;
}
