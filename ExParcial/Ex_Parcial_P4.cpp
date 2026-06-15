// PREGUNTA 4: Tienda de Smartphones Online
// Lenguaje: C++ para Code::Blocks
// Objetivo: usar funciones, switch/case obligatorio para obtener precio,
// if-else-if para descuento y cálculo del total final por cantidad.

#include <iostream>
#include <iomanip>   // Para fixed y setprecision(2)
#include <string>    // Para usar string

using namespace std;

// a) Función obtenerPrecioEquipo
// Usa switch/case obligatoriamente, según lo solicitado en el examen.
double obtenerPrecioEquipo(int modelo) {
    double precio = 0.0;

    switch (modelo) {
        case 1:
            precio = 2899.00; // iPhone 13
            break;
        case 2:
            precio = 2699.00; // Samsung S23
            break;
        case 3:
            precio = 1199.00; // Xiaomi Redmi Note
            break;
        case 4:
            precio = 1599.00; // Motorola Edge
            break;
        default:
            cout << "Modelo no disponible" << endl;
            precio = 0.0;
            break;
    }

    return precio;
}

// b) Función calcularDescuento
// Usa if-else-if. Retorna el monto del descuento, no el precio final.
// Premium = 12%, Estudiante = 8%, Regular = 0%.
double calcularDescuento(double precio, string tipoCliente) {
    double descuento = 0.0;

    if (tipoCliente == "Premium") {
        descuento = precio * 0.12;
    } else if (tipoCliente == "Estudiante") {
        descuento = precio * 0.08;
    } else if (tipoCliente == "Regular") {
        descuento = 0.0;
    } else {
        cout << "Tipo de cliente no reconocido. Se asumira Regular." << endl;
        descuento = 0.0;
    }

    return descuento;
}

int main() {
    // Variables de entrada
    int modelo, cantidad;
    string tipoCliente;

    // Variables de cálculo
    double precioUnitario, descuentoUnitario, precioFinalUnitario, totalFinal;

    // Entrada de datos solicitada por el examen
    cout << "===== TIENDA DE SMARTPHONES ONLINE =====" << endl;
    cout << "Modelos disponibles:" << endl;
    cout << "1. iPhone 13 - S/.2899.00" << endl;
    cout << "2. Samsung S23 - S/.2699.00" << endl;
    cout << "3. Xiaomi Redmi Note - S/.1199.00" << endl;
    cout << "4. Motorola Edge - S/.1599.00" << endl;

    cout << "\nIngrese el modelo del equipo (1 a 4): ";
    cin >> modelo;

    cout << "Ingrese tipo de cliente (Premium, Estudiante o Regular): ";
    cin >> tipoCliente;

    cout << "Ingrese cantidad de equipos (1 a 3): ";
    cin >> cantidad;

    // Llamada a funciones
    precioUnitario = obtenerPrecioEquipo(modelo);

    // Si el modelo no existe, el precio es 0. Evitamos calcular una venta inválida.
    if (precioUnitario > 0) {
        descuentoUnitario = calcularDescuento(precioUnitario, tipoCliente);
        precioFinalUnitario = precioUnitario - descuentoUnitario;
        totalFinal = precioFinalUnitario * cantidad;

        // Salida con dos decimales
        cout << fixed << setprecision(2);
        cout << "\n========== RESUMEN DE COMPRA ==========" << endl;
        cout << "Precio unitario: S/." << precioUnitario << endl;
        cout << "Descuento unitario: S/." << descuentoUnitario << endl;
        cout << "Precio final unitario: S/." << precioFinalUnitario << endl;
        cout << "Cantidad: " << cantidad << endl;
        cout << "Total final: S/." << totalFinal << endl;

        // Mensaje solicitado: envío gratis si el total supera S/.4,500.
        if (totalFinal > 4500.00) {
            cout << "¡Envío gratis disponible!" << endl;
        }

        cout << "=======================================" << endl;
    }

    return 0;
}

