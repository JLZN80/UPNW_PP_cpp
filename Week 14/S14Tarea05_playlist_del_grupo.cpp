#include <iostream>
#include <string>
using namespace std;

struct Cancion {
    int codigo;
    string titulo;
};

int main() {
    const int SIZE = 4;
    Cancion playlist[SIZE];

    for (int i = 0; i < SIZE; i++) {
        cout << "Cancion " << i + 1 << " - codigo: ";
        cin >> playlist[i].codigo;

        cout << "Cancion " << i + 1 << " - titulo: ";
        cin >> playlist[i].titulo;
    }

    cout << "\n--- PLAYLIST REGISTRADA ---" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << playlist[i].codigo << " - " << playlist[i].titulo << endl;
    }

    return 0;
}
