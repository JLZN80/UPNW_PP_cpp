#include <iostream>
using namespace std;

int main()
{
    double montoCompra, descuentoTotal, montoDescontado;
    double totalPagar;
    int edad, tipoCliente;
    char tieneTarjeta;

    descuentoTotal = 0;

    cout << "+++ SISTEMA DE ATENCION EN TIENDA +++" << endl;
    cout << "Ingrese el monto total de compra: S/ ";
    cin >> montoCompra;

    cout << "Ingrese la Edad del Cliente: ";
    cin >> edad;

    cout << "Tiene tarjeta de la Tienda [S/N]: ";
    cin >> tieneTarjeta;

    cout << "Ingrese el Tipo de Cliente: " << endl;
    cout << "1. Cliente Regular" << endl;
    cout << "2. Cliente Frecuente" << endl;
    cout << "3. Cliente VIP" << endl;
    cout << "Digite Opcion: ",
    cin >> tipoCliente;

    // aplicar los Descuentos que tiene la Tienda...
    // Descuento Basico:
    if (montoCompra > 200) {
        descuentoTotal = descuentoTotal + 5;
    }

    // Descuento por tener Tarjeta de la Tienda
    if (tieneTarjeta == 'S' || tieneTarjeta == 's') {
        descuentoTotal = descuentoTotal + 3;
    }

    // Descuento por Tipo de Cliente
    if (tipoCliente == 2) {
        descuentoTotal = descuentoTotal + 5;
    } else {
        // Descuento por Tipo de Cliente
        if (tipoCliente == 3) {
            descuentoTotal = descuentoTotal + 10;
        }
    }

    // Descuento por Edad:
    if (edad > 60) {
        descuentoTotal = descuentoTotal + 4;
    }


    // Ontener Calculos Finales
    montoDescontado = montoCompra * (descuentoTotal / 100.0);
    totalPagar = montoCompra - montoDescontado;

    // reporteria
    cout << "=== resumen de compra ===" << endl;
    cout << "Monto Inicial de Compra: " << montoCompra << endl;
    cout << "PorceNtaje Total de Descuento Recibido: " << descuentoTotal << "%" << endl;
    cout << "Monto Descontado S/. " <<  montoDescontado << endl;
    cout << "Total final a Pagar: S/. " << totalPagar;

    if (totalPagar > 300) {
        cout << "Cliente participa en sorteo especial." << endl;
    }

    return 0;
}
