#include <iostream>
using namespace std;

/*
Ingresar las horas trabajadas por 6 empleados
Las horas ingresadas son: 20 12 40 30 30 15
*/

int main()
{
    const int NUM_EMPLEADOS = 6; // Numero de Elementos!
    int horas[NUM_EMPLEADOS];
    //int horas[6];

    for (int i=0; i<NUM_EMPLEADOS; i++) {
        cout << "Ingresa las horas trabajas por el EMPLEADO (" << i << ") = ";
        cin >> horas[i];
    }

    cout << endl << endl;
    cout << "Las Horas ingresadas son...";

    for (int i=0; i<NUM_EMPLEADOS; i++)
        cout << "El elemento del Arreglo en el Indice(" << i << ") es = " << horas[i] << endl;

    return 0;
}

    // Recorrer el Arreglo usando un Bucle FOR...)
    // cout << horas[0] << endl;
    // cout << horas[1] << endl;
    // cout << horas[2] << endl;
    // cout << horas[3] << endl;
    // cout << horas[4] << endl;
    // cout << horas[5] << endl;

        // cin >> horas[0]; //Elem #1
    // cin >> horas[1]; //Elem #2
    // cin >> horas[2]; //Elem #3
    // cin >> horas[3]; //Elem #4
    // cin >> horas[4]; //Elem #5
    // cin >> horas[5]; //Elem #6
