#include <iostream>

using namespace std;
/*
10. Ordenar dos números usando referencias
Crear una función que reciba dos números enteros por referencia
y asegure que el primero quede como el menor y el Segundo como el mayor.
*/

void Ordenar(int &x, int &y)
{
    // Ordenar ASCENDENTE...
    if (x > y) // los valores estan DESC
    {
        int Aux = x;
        x = y;
        y = Aux;
    }
}

int main()
{   int x, y;

    cout << "Ingresa dos numeros enteros: ";
    cin >> x >> y;

    cout << "No Ordenados: " << x << ", " << y << endl;

    Ordenar(x,y);

    cout << "Ordenados: " << x << ", " << y << endl;

    return 0;
}
