#include <iostream>
using namespace std;

int main3()
{
// 1. DECLARACION DE VARIABLES
    int n1, n2, n3, suma;
    double promedio;

// 2. INGRESO DE DATOS/VARIABLES
    cout << "Digita tres valores enteros: ";
    cin >> n1 >> n2 >> n3;

// 3. CALCULO / PROCESAMIENTO
    suma = n1 + n2 + n3;
    promedio = suma / 3.0;

// 4. SALIDA DE RESULTADOS
    cout << "El promedio de los numeros es: " << promedio;

   return 0;
}
