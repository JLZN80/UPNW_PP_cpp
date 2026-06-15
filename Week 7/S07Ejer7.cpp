#include <iostream>
#include <cstring>

using namespace std;

// Una pequeña aplicación financiera requiere validar
// operaciones matemáticas antes de ejecutarlas. El
// usuario deberá ingresar un numerador y un denominador
// en una sola línea. El programa deberá validar
// que el denominador sea diferente de cero antes de realizar
// la division.
int main()
{
    double num, denom;
    double resultado;

    cout << "Ingresa dos Valores (Numerador y Denominador): ";
    cin >> num >> denom;  // Ingresa los valores en la misma linea

    // Hallar el resultado de la operacion

    // USANDO IF-ELSE:
    //================================
//    if (denom != 0) {
//        resultado = num / denom;
//        cout << "El resultado de la operacion es: " << resultado;
//    }
//    else
//        cout << "Error: No existe la dision entre 0";

    // USANDO IF SIMPLE:
    //================================
    resultado = 0;
    char Mensaje[50] = "No se puede Dividir por 0";

    if (denom != 0) {
        resultado = num / denom;
        Mensaje = strcat("El Resultado es: ", resultado);
    }

    cout << Mensaje;

    return 0;
}
