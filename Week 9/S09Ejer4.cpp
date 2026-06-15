#include <iostream>

using namespace std;

int main()
{
    int opcion;

    do
    {
        cout << endl << "***** MNEU DE OPCIONES *****" << endl;
        cout << "1. SALUDAR" << endl;
        cout << "2. DESPEDIR" << endl;
        cout << "3. SALIR" << endl;
        cin >> opcion;

        switch (opcion) {

            case 1:
                cout << "Hola Usuario, Bienvenido al Programa!";
                break;
            case 2:
                cout << "Hasta Luego, que tengas un excelente dia!";
                break;
            case 3:
                cout << "Saliendo del Programa...";
                break;
            default:
                cout << "Opcion No Reconocida. Intenta Nuevamente!";
                break;
        }

    } while (opcion != 3); // Le pongo ; ya que es Do-While

    return 0;
}
