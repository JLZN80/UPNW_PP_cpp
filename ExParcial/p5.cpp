// PREGUNTA 5: Sistema de Delivery PedidosYa
// Lenguaje: C++ para Code::Blocks
// Incluye pseudocódigo obligatorio y programa completo en C++.
// Objetivo: simular exactamente 3 pedidos, acumular ganancias,
// contar pedidos, calcular promedio y mostrar mensaje de meta.

/*
==================== PSEUDOCÓDIGO OBLIGATORIO ====================

Funcion acumularGanancias(nuevaGanancia, Por Referencia totalDia, Por Referencia contadorPedidos)
    totalDia <- totalDia + nuevaGanancia
    contadorPedidos <- contadorPedidos + 1
FinFuncion

Algoritmo SistemaDeliveryPedidosYa
    Definir tipoPedido, hora, i, contadorPedidos Como Entero
    Definir gananciaBase, gananciaFinal, totalDia, promedio Como Real

    totalDia <- 0
    contadorPedidos <- 0

    Para i <- 1 Hasta 3 Hacer
        Escribir "Ingrese tipo de pedido: "
        Leer tipoPedido
        Escribir "Ingrese hora del pedido: "
        Leer hora

        gananciaBase <- calcularGananciaBase(tipoPedido)
        gananciaFinal <- aplicarBonus(gananciaBase, hora)
        acumularGanancias(gananciaFinal, totalDia, contadorPedidos)
    FinPara

    promedio <- totalDia / contadorPedidos

    Escribir "Total ganado: ", totalDia
    Escribir "Numero de pedidos: ", contadorPedidos
    Escribir "Promedio por pedido: ", promedio

    Si totalDia > 55 Entonces
        Escribir "¡Meta del día cumplida!"
    FinSi
FinAlgoritmo

===================================================================
*/

#include <iostream>
#include <iomanip>   // Para fixed y setprecision(2)

using namespace std;

// b) Función calcularGananciaBase
// Usa switch/case para devolver la ganancia según el tipo de pedido.
double calcularGananciaBase(int tipoPedido) {
    double ganancia = 0.0;

    switch (tipoPedido) {
        case 1:
            ganancia = 6.00;   // Comida
            break;
        case 2:
            ganancia = 7.50;   // Farmacia
            break;
        case 3:
            ganancia = 9.00;   // Mercado
            break;
        case 4:
            ganancia = 11.50;  // Express
            break;
        default:
            // El examen no exige validar el tipo, pero se deja un mensaje de apoyo.
            cout << "Tipo de pedido no valido. Ganancia base S/.0.00" << endl;
            ganancia = 0.0;
            break;
    }

    return ganancia;
}

// b) Función aplicarBonus
// Si la hora está entre 11-13 o 18-20, se agrega S/.2.50.
double aplicarBonus(double ganancia, int hora) {
    if ((hora >= 11 && hora <= 13) || (hora >= 18 && hora <= 20)) {
        ganancia = ganancia + 2.50;
    }

    return ganancia;
}

// b) Función acumularGanancias por REFERENCIA
// totalDia y contadorPedidos usan &, porque deben modificarse dentro de la función.
void acumularGanancias(double nuevaGanancia, double &totalDia, int &contadorPedidos) {
    totalDia = totalDia + nuevaGanancia;
    contadorPedidos = contadorPedidos + 1;
}

int main() {
    // Variables de entrada y control
    int tipoPedido, hora;
    int contadorPedidos = 0;

    // Variables de cálculo
    double gananciaBase, gananciaFinal;
    double totalDia = 0.0;
    double promedio;

    cout << "===== SISTEMA DE DELIVERY PEDIDOSYA =====" << endl;
    cout << "Tipos de pedido:" << endl;
    cout << "1. Comida   - S/.6.00" << endl;
    cout << "2. Farmacia - S/.7.50" << endl;
    cout << "3. Mercado  - S/.9.00" << endl;
    cout << "4. Express  - S/.11.50" << endl;

    // El programa debe simular exactamente 3 pedidos.
    for (int i = 1; i <= 3; i++) {
        cout << "\nPedido " << i << endl;
        cout << "Ingrese tipo de pedido (1 a 4): ";
        cin >> tipoPedido;

        cout << "Ingrese hora del pedido (0 a 23): ";
        cin >> hora;

        // Llamada a funciones solicitadas
        gananciaBase = calcularGananciaBase(tipoPedido);
        gananciaFinal = aplicarBonus(gananciaBase, hora);
        acumularGanancias(gananciaFinal, totalDia, contadorPedidos);

        cout << fixed << setprecision(2);
        cout << "Ganancia del pedido " << i << ": S/." << gananciaFinal << endl;
    }

    // Cálculo de promedio por pedido
    promedio = totalDia / contadorPedidos;

    // Resultados con formato de dos decimales
    cout << fixed << setprecision(2);
    cout << "\n========== RESUMEN DEL TURNO ==========" << endl;
    cout << "Total ganado: S/." << totalDia << endl;
    cout << "Numero de pedidos: " << contadorPedidos << endl;
    cout << "Promedio por pedido: S/." << promedio << endl;

    // Mensaje de meta solicitado
    if (totalDia > 55.00) {
        cout << "¡Meta del día cumplida!" << endl;
    }

    cout << "=======================================" << endl;

    return 0;
}

