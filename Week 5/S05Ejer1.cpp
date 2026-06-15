#include <iostream>
using namespace std;

void doble (double a) // Parametro por REFERENCIA (&)
{
    cout << "Duplicando el Valor..." << endl;
    a = 2 * a;
    cout << "Saliendo de la funcion doble..." << endl;
}

int main()
{
    double a;

    cout << "Ingresa 1 valor: " << endl;
    cin >> a;

    cout << "Llamando a la funcion doble..." << endl;

    doble(a); // La referencia es &

    cout << "El numero ya esta multiplicado por 2..." << endl;

    cout << "El valor es: " << a;

    return 0;
}
