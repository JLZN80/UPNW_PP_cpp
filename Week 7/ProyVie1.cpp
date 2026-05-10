#include <iostream>

using namespace std;

int main()
{   // Solicite un numero entero via teclado
    // evaluar si el numero es par o no, con un mensaje...
    int numero;

    cout << "Ingresa un Numero Entero: " << endl;
    cin >> numero;

    // El operador "/" solo opera, no me dice
    // El operado "%" me retorna el residuo/resto de la divisio
    // PAR: Un numero es aquel cuyo resto/residuo con #2 es igual a 0.

    if ((numero % 2) == 0) {
        cout << "El numero ingresado: " << numero << " es PAR!!!";
    }
    else {
        cout << "El numero ingresado: " << numero << " es IMPAR...!";
        cout << endl << "------------------------------------";
    }

    return 0;
}
