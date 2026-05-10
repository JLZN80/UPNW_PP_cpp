#include <iostream>
using namespace std;

int main()
{
    int n;
    int residuo;

    cout << " Ingresar un Nro. Entero: ";
    cin >> n;

    // DETERMINAR SI ES NRO ENTERO (MOD = 0)
    residuo = n % 2;

    if (residuo == 0) {
    //if ((n % 2) == 0) {
        cout << "El numero: " << n << " es PAR." << endl;
    } else {
        cout << "El numero: " << n << " es IMPAR." << endl;
    }
    return 0;
}
