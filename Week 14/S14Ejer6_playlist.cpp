#include <iostream>
#include <string>
using namespace std;

struct Cancion {
    int codigo;
    string titulo;
};

int main() {
    Cancion playlist[4];

    for (int i = 0; i < 4; i++) {
        cout << "Cancion " << i + 1 << " codigo: ";
        cin >> playlist[i].codigo;
        cout << "Cancion " << i + 1 << " titulo: ";
        cin >> playlist[i].titulo;
    }

    cout << "\n--- PLAYLIST REGISTRADA ---" << endl;
    for (int i = 0; i < 4; i++) {
        cout << playlist[i].codigo << " - " << playlist[i].titulo << endl;
    }
    system("pause");
    return 0;
}
