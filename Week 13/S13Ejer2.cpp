#include <iostream>

using namespace std;

int linearSearch(const int arr[], int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i; // Retorna la posici�n de inmediato si lo encuentra
        }
    }
    return -1; // Retorna -1 si termina el bucle sin �xito
}

int main()
{
    const int SIZE = 5;

    int ANroCta[SIZE] = {300, 100, 200, 500, 400};
    string ATitularCta[SIZE] = {"Jorge","Carlos","Julio","Jose","Ricardo"};
    double ASaldoCta[SIZE] = {1000, 2500, 500, 1700, 800};

    int nPosCta;
    int NroCta;

    cout << "Ingresa el Numero de Cuenta del Ciente a Buscar [100-500]: ";
    cin >> NroCta;

    nPosCta = linearSearch(ANroCta, SIZE, NroCta);

    if (nPosCta == -1)
        cout << "La cuenta ingresada no coincide en la Base de Datos!";
    else {

        cout << "REPORTE DE CLIENTES: " << endl;
        cout << "=====================" << endl;
        cout << "Nro de Cuenta: " << ANroCta[nPosCta] << endl;
        cout << "Nombre del Cliente: " << ATitularCta[nPosCta] << endl;
        cout << "Saldo de la Cuenta: " << ASaldoCta[nPosCta] << endl;

    }

    system("pause");
    return 0;
}
