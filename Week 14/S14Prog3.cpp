#include <iostream>
#include <string>
using namespace std;
 
struct Serie {
    string titulo;
    int temporadas;
    double rating;
};
 
void imprimirSerie(Serie s) {
    cout << "Titulo: " << s.titulo
         << " | Temporadas: " << s.temporadas
         << " | Rating: " << s.rating << endl;
}
 
int main() {
 
    // DECLARACION E INICIALIZACION DEL ARREGLO DE ESTRUCTURAS
    Serie catalogo[4] = {
        {"Stranger Things", 4, 8.7},
        {"The Last of Us",  2, 8.8},
        {"La Casa de Papel",5, 8.2},
        {"Squid Game",      2, 8.0}
    };
 
    // IMPRESION DEL CATALGO COMPLETO USANDO LA FUNCION..
    cout << "=== CATALOGO NETFLIX ===" << endl;
 
    // 4) Llamar imprimirSerie(catalogo[i]) para cada serie
    for (int i = 0; i < 4; i++) {
        imprimirSerie(catalogo[i]);
    }
 
    // ALGORTIMO DE BUSQUEDA DE SERIE MEJOR CALIFICADA...
    int mejorIdx = 0;
    for (int i = 1; i < 4; i++) {
        if (catalogo[i].rating > catalogo[mejorIdx].rating) {
            mejorIdx = i;
        }
    }
 
    // VISUALIZACION DE LA SERIE CON MEJOR RATING...
    cout << "\n=== SERIE MEJOR VALORADA ===" << endl;
    imprimirSerie(catalogo[mejorIdx]);
 
    system("pause");
    return 0;
}