#include <iostream>

using namespace std;
/*
3. Validación de número positivo
Crear una función que solicite al usuario ingresar un número entero positivo.
La función debe repetir la solicitud mientras el número ingresado sea menor
o igual a cero.
*/

void ValidarNumero (int Nro, bool &Flag)
{
    if (Nro <= 0)
    {
        Flag = true;
    }
    else
    {
        Flag = false;
    }
}
int main()
{
    int Nro;
    bool Flag = true;

    do
    {
        cout << "Ingresa un Numero Entero Positivo > 0: ";
        cin >> Nro;

        ValidarNumero(Nro,Flag);

    }   while (Flag);

    return 0;
}
