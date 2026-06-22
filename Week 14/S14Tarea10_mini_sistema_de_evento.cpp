#include <iostream>
#include <string>
using namespace std;

struct Asistente {
    int codigo;
    string nombre;
    int edad;
};

int main() {
    const int MAX = 5;
    Asistente asistentes[MAX];
    int cantidad = 0;
    int opcion;

    do {
        cout << "\n--- MENU EVENTO UNIVERSITARIO ---" << endl;
        cout << "1. Registrar asistente" << endl;
        cout << "2. Listar asistentes" << endl;
        cout << "3. Buscar asistente por codigo" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                if (cantidad < MAX) {
                    cout << "Codigo: ";
                    cin >> asistentes[cantidad].codigo;

                    cout << "Nombre: ";
                    cin >> asistentes[cantidad].nombre;

                    cout << "Edad: ";
                    cin >> asistentes[cantidad].edad;

                    cantidad++;
                    cout << "Asistente registrado." << endl;
                } else {
                    cout << "Ya no hay espacio para mas asistentes." << endl;
                }
                break;

            case 2:
                if (cantidad == 0) {
                    cout << "No hay asistentes registrados." << endl;
                } else {
                    cout << "\n--- LISTA DE ASISTENTES ---" << endl;
                    for (int i = 0; i < cantidad; i++) {
                        cout << asistentes[i].codigo << " - "
                             << asistentes[i].nombre << " - "
                             << asistentes[i].edad << " anios" << endl;
                    }
                }
                break;

            case 3: {
                int buscado;
                int posicion = -1;

                cout << "Codigo a buscar: ";
                cin >> buscado;

                for (int i = 0; i < cantidad; i++) {
                    if (asistentes[i].codigo == buscado) {
                        posicion = i;
                        break;
                    }
                }

                if (posicion == -1) {
                    cout << "Asistente no encontrado." << endl;
                } else {
                    cout << "Encontrado: " << asistentes[posicion].nombre
                         << ", " << asistentes[posicion].edad << " anios" << endl;
                }
                break;
            }

            case 4:
                cout << "Saliendo del sistema." << endl;
                break;

            default:
                cout << "Opcion invalida." << endl;
        }
    } while (opcion != 4);

    return 0;
}
