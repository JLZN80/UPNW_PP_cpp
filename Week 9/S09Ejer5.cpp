#include <iostream>

using namespace std;

int main()
{

    int Nro;
    double Factorial;


    Factorial = 1;

    // Hallando el Numero Factorial


        cout << "Ingresame un Numero No Negativo (X!) para el Factorial: ";
        cin >>Nro;

        if (Nro > 0) {
        //for (int i=Nro; i != 1; i--)
        //    Factorial = Factorial * i;

        for (int i=1; i<=Nro; i++)
            Factorial = Factorial * i; // Multiplicacion

        cout << "El Factorial de: " << Nro << "! = " << Factorial;
        }
        else
            cout << "Error. Ingresaste un Nro Negativo!";

    return 0;
}
