#include <iostream>
#include <string>
using namespace std;

// DEFINIDO LA ESTRUCTURA: PLANILLA DE PAGOS
struct PayRoll
{
    int empNumber;
    string name;
    double hours;
    double payRate;
    double grossPay;    // grossPay = (P x Q) = (# Horas x Tasa por Hora)
};  // No olvidar el punto y coma al final de la Estructura


int main()
{
    PayRoll Empleado;

    // EL USUARIO DEBE INGRESAR LA INFORMACION PREVIAMENTE...
    //=======================================================
    cout << "Ingresa el # Empleado: ";
    cin >> Empleado.empNumber;

    cout << "Ingresa el Nombre del Empleado: ";
    cin >> Empleado.name;

    cout << "Ingresa el Numero de Horas Trabajadas: ";
    cin >> Empleado.hours;

    cout << "Ingresa la Tarifa de Pago x Hora: ";
    cin >> Empleado.payRate;

    //=======================================================
    // Calcular el Pago al Trabajador:
    //=======================================================
    Empleado.grossPay = Empleado.hours * Empleado.payRate;

    //=======================================================
    // MOSTAR LOS RESULTADOS EN UN REPORTE:
    //=======================================================
    cout << " REPORTE DE PLANILLAS " << endl;
    cout << "======================" << endl;
    cout << " ID TRABAJADOR: " << Empleado.empNumber << endl;
    cout << " NOMBRE TRABAJADOR: " << Empleado.name << endl;
    cout << " # HORAS TRABAJADAS: " << Empleado.hours << endl;
    cout << " TARIFA DE PAGO: S/. " << Empleado.payRate << endl;
    cout << " PAGO TOTAL: S/. " << Empleado.grossPay << endl;

    system("pause");
    return 0;
}
