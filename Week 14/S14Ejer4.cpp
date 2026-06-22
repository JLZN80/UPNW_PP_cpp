#include <iostream>

using namespace std;

// Estructura PUNTO EN PLANO: P(x,y)
struct Punto {
    double x;  // double x,y;
    double y;
};

void ImprimirPunto (Punto p)
{
    cout << "Coordenada del Punto: ( " << p.x << " , " << p.y << " )" << endl;
}

int main()
{
    Punto PRojo = {0,0};
    Punto PAzul = {20,10};
    Punto PVerde = {0,10};

    ImprimirPunto(PRojo);
    ImprimirPunto(PAzul);
    ImprimirPunto(PVerde);

    system("pause");
    return 0;
}
