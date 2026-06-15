#include <iostream>
#include <fstream>  // MANEJOD DE ARCHIVOS

using namespace std;

int main()
{
    const int NRO_DIA_SEM = 7;

    string DiaSemana[NRO_DIA_SEM] = {"LUNES","MARTES","MIERCOLES","JUEVES","VIERNES","SABADO","DOMINGO"};

    ofstream ArchivoDiaSemana;
    ArchivoDiaSemana.open("ListaDiaSemana.txt");

    for (int i=0; i<7; i++) {
        cout << "El elemento del Arreglo en el DiaSemana(" << i << ") es = " << DiaSemana[i] << endl;
        ArchivoDiaSemana << "El elemento del Arreglo en el DiaSemana(" << i << ") es = " << DiaSemana[i] << endl;
    }

    return 0;
}
