#include <iostream>
#include <string>
using namespace std;

struct Amigo {
    int id;
    string nombre;
};

int main() {
    Amigo grupo[3];

    for (int i = 0; i < 3; i++) {
        cout << "Amigo " << i + 1 << " ID: ";
        cin >> grupo[i].id;
        cout << "Amigo " << i + 1 << " Nombre: ";
        cin >> grupo[i].nombre;
    }

    cout << "\n--- REPORTE DEL GRUPO ---" << endl;
    for (int i = 0; i < 3; i++) {
        cout << "ID: " << grupo[i].id << " - " << grupo[i].nombre << endl;
    }

    system("pause");
    return 0;
}
