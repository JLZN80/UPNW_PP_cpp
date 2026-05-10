#include <iostream>

using namespace std;

void Calcular(double A, double B, double &ValorSuma, double &ValorResta, double &ValorDivision)
{   // Variables LOCALES
    double Contador;

    ValorSuma = A + B; // 170
    ValorResta = A - B; // 80
    ValorDivision = A / B; // 80
}

int main()
{   // Pedirle al usuario que me de dos numeros y voy a calculas las 4
    // operaciones matematica:
    double A, B;
    double ValorSuma, ValorResta, ValorDivision;

    cout << "Ingresa el Valor A: ";
    cin >> A; // 100
    cout << "Ingresa el Valor B: ";
    cin >> B; // 70

//  Calcular(100, 70, 0, 0)
    Calcular(A, B, ValorSuma, ValorResta, ValorDivision);
    Calcular(A, B, ValorSuma, ValorResta, ValorDivision);

    cout << "La SUMA de los Numeros es: " << ValorSuma << endl;
    cout << "La RESTA de los Numeros es: " << ValorResta << endl;
    cout << "La DIVISION de los Numeros es: " << ValorDivision;

    return 0;
}
