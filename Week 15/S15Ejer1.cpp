#include <iostream>
using namespace std;


struct Alumno { 
    string Nombre;
    double Promedio;
};

int main() {

    Alumno LN1 = {"Carlos", 17.5};
    Alumno LN2 = {"Luis", 19.0};

    if (LN1.Promedio > LN2.Promedio)
        cout << "El primer puesto lo ocupo: " << LN1.Nombre;
    else
        cout << "El primer puesto lo ocupo: " << LN2.Nombre;

    system("pause");
    return 0;
}
