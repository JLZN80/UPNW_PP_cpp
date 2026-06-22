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

    // QUE PASA CUANDO YO DESEO INICIALIZAR LA INFORMACION...
    //=======================================================
    // PayRoll Empleado; defino de una forma general

    PayRoll Empleado1 = {1001, "JORGE", 15, 22.75};
    PayRoll Empleado2 = {1002, "CARLOS", 50, 32.25};

    //=======================================================
    // Calcular el Pago al Trabajador:
    //=======================================================
    Empleado1.grossPay = Empleado1.hours * Empleado1.payRate;
    Empleado2.grossPay = Empleado2.hours * Empleado2.payRate;

    //=======================================================
    // MOSTAR LOS RESULTADOS EN UN REPORTE:
    //=======================================================
    cout << " REPORTE DE PLANILLAS " << endl;
    cout << "======================" << endl;
    cout << " ID TRABAJADOR: " << Empleado1.empNumber << endl;
    cout << " NOMBRE TRABAJADOR: " << Empleado1.name << endl;
    cout << " # HORAS TRABAJADAS: " << Empleado1.hours << endl;
    cout << " TARIFA DE PAGO: S/. " << Empleado1.payRate << endl;
    cout << " PAGO TOTAL: S/. " << Empleado1.grossPay << endl;

    cout << endl;
    cout << " ID TRABAJADOR: " << Empleado2.empNumber << endl;
    cout << " NOMBRE TRABAJADOR: " << Empleado2.name << endl;
    cout << " # HORAS TRABAJADAS: " << Empleado2.hours << endl;
    cout << " TARIFA DE PAGO: S/. " << Empleado2.payRate << endl;
    cout << " PAGO TOTAL: S/. " << Empleado2.grossPay << endl;

    system("pause");
    return 0;
}
