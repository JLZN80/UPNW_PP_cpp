#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double montoCompra, porcentajeDescuento, descuentoSoles, precioFinal;
    int diaSemana;

    cout << "=== ZARA: TEMPORADA DE DESCUENTOS ===" << endl;
    cout << "Ingrese monto de compra S/.: ";
    cin >> montoCompra;

    cout << "Ingrese dia de la semana (1=Lunes ... 7=Domingo): ";
    cin >> diaSemana;

    if (montoCompra < 100) {
        porcentajeDescuento = 0;
    } else if (montoCompra <= 299) {
        porcentajeDescuento = 10;
    } else if (montoCompra <= 499) {
        porcentajeDescuento = 20;
    } else {
        porcentajeDescuento = 30;
    }

    if (diaSemana == 1 || diaSemana == 2) {
        porcentajeDescuento = porcentajeDescuento + 5;
    }

    descuentoSoles = montoCompra * (porcentajeDescuento / 100.0);
    precioFinal = montoCompra - descuentoSoles;

    cout << fixed << setprecision(2);
    cout << "\n=== BOLETA DE COMPRA ===" << endl;
    cout << "Monto original: S/. " << montoCompra << endl;
    cout << "Descuento total: " << porcentajeDescuento << "%" << endl;
    cout << "Descuento en soles: S/. " << descuentoSoles << endl;
    cout << "Precio final a pagar: S/. " << precioFinal << endl;

    if (precioFinal > 200) {
        cout << "Pago en 3 cuotas sin intereses disponible!" << endl;
    }

    system("pause");    
    return 0;
}