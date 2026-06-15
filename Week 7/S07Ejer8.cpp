#include <iostream>

using namespace std;
/*
Ejercicio 6 – Descuento en Tienda
Una tienda de tecnología está aplicando promociones automáticas.
Si el monto de compra supera los S/100.00, el cliente recibe un
descuento del 10%. El programa debe solicitar el monto de compra,
determinar si aplica descuento y finalmente mostrar el total a pagar.
*/
int main()
{
    double MtoCompra, MtoFinal;
    const double MtoMinimo = 1000.0;
    const double Dscto = 0.10; // 10%

    cout << "Ingresa el Monto de Compra: ";
    cin >> MtoCompra;

    //  Evaluando la Condicion:
    if (MtoCompra >= MtoMinimo) {
        MtoFinal = MtoCompra * (1.0 - Dscto);
    }
    else
        MtoFinal = MtoCompra;

    cout << "El monto final a pagar es: " << MtoFinal;

    // Calculo Alternativo
    // double MtoDscto = MtoCompra * Dscto;
    // MtoFinal = MtoCompra - MtoDscto;

    return 0;
}
