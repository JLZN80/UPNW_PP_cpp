#include <iostream>
#include <string>
 
using namespace std;
 
struct Serie {
    string titulo;
    int temporadas;
    double rating;
};
 
void imprimirSerie(Serie s) {
    cout << "Titulo: " << s.titulo << " | Temporadas: " << s.temporadas << " | Rating: " << s.rating << endl;
}
 
int main() {
    Serie catalago[4] = {
        {"Stranger Things", 4, 8.7},
        {"The Last of Us", 2, 8.8},
        {"La Casa de Papel", 5, 8.2},
        {"Squid Game", 2, 8.0}
    };
 
    cout << "--- CATALOGO DE NETFLIX ---" << endl;
    for (int i = 0; i < 4; i++) {
        imprimirSerie(catalago[i]);
    }
 
    int mejorIdx = 0;
    for (int i = 1; i < 4; i++) {
        if (catalago[i].rating > catalago[mejorIdx].rating) {
            mejorIdx = i;
        }
    }
 
    cout << "--- SERIE MEJOR VALORADA ---" << endl;
    imprimirSerie(catalago[mejorIdx]);
 
    system("pause");
    return 0;
}