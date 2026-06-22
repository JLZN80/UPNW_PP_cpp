#include <iostream>
#include <string>
using namespace std;

struct Contacto {
    int codigo;
    string nombre;
};

int main() {
    const int SIZE = 5;
    Contacto contactos[SIZE];
    int codigoBuscado;
    int posicion = -1; // -1 indica que todavía no se encontró el contacto.

    for (int i = 0; i < SIZE; i++) {
        cout << "Contacto " << i + 1 << " codigo: ";
        cin >> contactos[i].codigo;

        cout << "Contacto " << i + 1 << " nombre: ";
        cin >> contactos[i].nombre;
    }

    cout << "\nIngrese el codigo a buscar: ";
    cin >> codigoBuscado;

    for (int i = 0; i < SIZE; i++) {
        if (contactos[i].codigo == codigoBuscado) {
            posicion = i;
            break; // Se usa break porque ya encontramos el contacto.
        }
    }

    if (posicion == -1) {
        cout << "Contacto no encontrado." << endl;
    } else {
        cout << "Contacto encontrado: " << contactos[posicion].nombre << endl;
    }

    return 0;
}
