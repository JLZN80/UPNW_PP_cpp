#include <iostream>

using namespace std;

double Pi = 3.141516; // Variable GLOBAL

void CalcularDiametro (double radio)
{
    Pi = 5;     // Variable LOCAL
    cout << "El diametro de la circunsferencia es: " << (2 * Pi * radio) << endl;
}

void CalcularArea (double radio)
{
    cout << "El Area de una circunsferencia es: " << (Pi * radio * radio) << endl;
}

int main()
{   // El diametro de un Circunsferencia 2*Pi.r

    double radio;  // Variable LOCAL
    //double Pi = 3.141516;

    cout << "Indicame el Radio de la Circunsferencia: ";
    cin >> radio;

    CalcularDiametro(radio);
    CalcularArea(radio);

    return 0;
}
