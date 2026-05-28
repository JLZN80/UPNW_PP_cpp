
// PREGUNTA 3: Entradas para Concierto
// Lenguaje: C++ para Code::Blocks
// Objetivo: resolver el problema usando funciones por valor y por referencia.
// El programa pide datos del concierto, calcula precio base, descuento,
// subtotal, IGV, total y muestra un ticket con dos decimales.

#include <iostream>
#include <iomanip>   // Para fixed y setprecision(2)
#include <string>    // Para usar string

using namespace std;

// a) Función calcularPrecioBase por VALOR
// Recibe el tipo de entrada y retorna el precio correspondiente.
double calcularPrecioBase(int tipoEntrada) {
    double precio = 0.0;

    if (tipoEntrada == 1) {
        precio = 40.00;       // General
    } else if (tipoEntrada == 2) {
        precio = 75.00;       // Preferencial
    } else if (tipoEntrada == 3) {
        precio = 120.00;      // VIP
    }

    return precio;
}

// b) Función aplicarDescuento por VALOR
// Recibe el precio y la edad. Si el cliente es menor de 18 o tiene 65 años o más,
// se aplica 20% de descuento. En caso contrario, devuelve el precio sin cambio.
double aplicarDescuento(double precio, int edad) {
    double precioConDescuento;

    if (edad < 18 || edad >= 65) {
        precioConDescuento = precio * 0.80; // Se paga el 80% porque el descuento es 20%
    } else {
        precioConDescuento = precio;
    }

    return precioConDescuento;
}

// c) Función calcularTotal por REFERENCIA
// subtotal, igv y total se pasan con &, por eso la función puede modificar
// directamente esas variables creadas en main().
void calcularTotal(double precioUnitario, int cantidad, double &subtotal, double &igv, double &total) {
    subtotal = precioUnitario * cantidad;
    igv = subtotal * 0.18;
    total = subtotal + igv;
}

// d) Función mostrarTicket
// Muestra los resultados principales del ticket.
void mostrarTicket(string artista, int cantidad, double subtotal, double igv, double total) {
    cout << fixed << setprecision(2);
    cout << "\n========== TICKET DE CONCIERTO ==========" << endl;
    cout << "Artista: " << artista << endl;
    cout << "Cantidad de entradas: " << cantidad << endl;
    cout << "Subtotal: S/." << subtotal << endl;
    cout << "IGV 18%: S/." << igv << endl;
    cout << "Total a pagar: S/." << total << endl;
    cout << "=========================================" << endl;
}

int main() {
    // Variables de entrada
    string artista;
    int tipoEntrada, edad, cantidad;

    // Variables de proceso y salida
    double precioBase, precioFinalUnitario;
    double subtotal, igv, total;

    // Entrada de datos solicitada en el examen
    cout << "Ingrese el nombre del artista: ";
    getline(cin, artista);

    cout << "Ingrese tipo de entrada (1=General, 2=Preferencial, 3=VIP): ";
    cin >> tipoEntrada;

    cout << "Ingrese edad del comprador: ";
    cin >> edad;

    cout << "Ingrese cantidad de entradas (1 a 8): ";
    cin >> cantidad;

    // Llamada a las funciones solicitadas
    precioBase = calcularPrecioBase(tipoEntrada);
    precioFinalUnitario = aplicarDescuento(precioBase, edad);
    calcularTotal(precioFinalUnitario, cantidad, subtotal, igv, total);
    mostrarTicket(artista, cantidad, subtotal, igv, total);

    return 0;
}
