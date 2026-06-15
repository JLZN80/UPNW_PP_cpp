#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    const int NRO_MESES = 12;
    int contador = 0;

    string ArrayMeses[NRO_MESES];

    ifstream NombreArchivo;
    NombreArchivo.open("ListaMeses.txt");

    while (contador < NRO_MESES) {
        NombreArchivo >> ArrayMeses[contador];
        contador = contador + 1;
    }

    NombreArchivo.close();

    for (int i=0; i<NRO_MESES; i++)
        cout << ArrayMeses[i] << endl;

    return 0;
}
