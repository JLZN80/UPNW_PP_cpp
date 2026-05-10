#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
using namespace std;

int main() {
    string jugador;
    double presupuesto, ahorroMensual, costoGPU;
    double porcentajeGPU, dineroRestante;
    int mesesNecesarios;

    cout << "=== CALCULADORA DE AHORRO PARA PC GAMING ===" << endl;
    cout << "Ingrese nombre del jugador: ";
    cin >> jugador;

    cout << "Ingrese presupuesto total S/.: ";
    cin >> presupuesto;

    cout << "Ingrese ahorro mensual S/.: ";
    cin >> ahorroMensual;

    cout << "Ingrese costo de la GPU S/.: ";
    cin >> costoGPU;

    mesesNecesarios = ceil(presupuesto / ahorroMensual);
    porcentajeGPU = (costoGPU / presupuesto) * 100;
    dineroRestante = presupuesto - costoGPU;

    cout << fixed << setprecision(2);
    cout << "\n=== RESULTADO PARA " << jugador << " ===" << endl;
    cout << "Presupuesto total: S/. " << presupuesto << endl;
    cout << "Ahorro mensual: S/. " << ahorroMensual << endl;
    cout << "Meses necesarios para ahorrar el total: " << mesesNecesarios << endl;
    cout << "Porcentaje de la GPU sobre el total: " << porcentajeGPU << "%" << endl;
    cout << "Dinero restante despues de comprar la GPU: S/. " << dineroRestante << endl;

    if (porcentajeGPU > 50) {
        cout << "La GPU se lleva mas de la mitad del presupuesto." << endl;
    }

    system("pause");    
    return 0;
}