#include <iostream>

using namespace std;

int main()
{
    int edad;

    do
    {
        cout << "Ingresa tu Edad en el rango (18-100): ";
        cin >> edad; // (1) Inicializacion y (3) Actualizacion

        if (edad < 18)
            cout << "Revisa la edad ya que solo pueden ingresar Mayores Edad!" << endl;
        if (edad > 100)
            cout << "Revisa la edad ingresada ya que es un Error de Digitacion!" << endl;


    } while (edad < 18 || edad > 100); // (2) Evaluacion de la Condicion

    return 0;
}
