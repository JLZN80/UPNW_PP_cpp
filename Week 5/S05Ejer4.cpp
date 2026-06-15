#include <iostream>
using namespace std;

// 1. Intercambio de valores con referencias
// Crear una función que reciba dos números enteros por referencia e intercambie sus valores.
// En el main, mostrar los valores antes y después del intercambio.
// A = 10 y B = 50
// A = 50 y B = 10
// Intercambio lo Haga una funcion

void IntercambiarNumeros (int &A, int &B)
{
    int Aux;
    Aux = A;
    A = B;
    B = Aux;
}

int main()
{
    int A, B;

    cout << "Ingresame dos Numeros Enteros: ";
    cin >> A >> B;

    cout << "Los Numeros Ingresados ANTES del Cambio son: A= " << A << " y B= " << B << endl;
    IntercambiarNumeros (A, B);
    cout << "Los Numeros Ingresados DESPUES del Cambio son: A= " << A << " y B= " << B;

    return 0;
}
