#include <iostream>
#include <string>
 
using namespace std;
 
struct Jugador {

    string nombre;
    string pais;
    int dorsal;
    int goles;

};
 
int main() {

    Jugador j;
 
    // CARGA DE LA ESTRUCTURA
    j.nombre = "Kylian Mbappe";
    j.pais = "Francia";
    j.dorsal = 10;
    j.goles = 4;
 
    // VISUALIZACION DEL REPORTE
    cout << "Nombre: " << j.nombre << endl;
    cout << "Pais: " << j.pais << endl;
    cout << "Dorsal: " << j.dorsal << endl;
    cout << "Goles: " << j.goles << endl;
 
    system("pause"); // LINEA DE PAUSA PARA VISUALIZACION (Solo para Visual Code)
    return 0;

}

 