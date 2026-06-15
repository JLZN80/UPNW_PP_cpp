#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ArchivoVentas;
    int NroDiasVenta;
    double MtoVentaxDia;

    // 1) ABRIR CONEXION
    ArchivoVentas.open("Reporte_De_Ventas_2026.txt");

    // 2) PROCESAR EL ARCHIVO
    cout << "Cuantos Dias has vendido en la Semana: ";
    cin >> NroDiasVenta;

    //Necesito capturar las ventas por dia...
    for (int i = 1; i <= NroDiasVenta; i++) {

        // Esto lo tengo en memoria...
        cout << "Ingresa el Monto Vendido en Soles del dia[" << i << "] = ";
        cin >> MtoVentaxDia;

        // grabando en el archivo...
        ArchivoVentas << "Las Ventas del dia (" << i << ") = " << MtoVentaxDia << endl;
    }

    cout << "Informacion Grabada!";

    // 3) CERRAR LA CONEXION
    ArchivoVentas.close();

    return 0;
}
