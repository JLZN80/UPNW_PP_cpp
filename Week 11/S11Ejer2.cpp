#include <iostream>

using namespace std;

int main()
{
    //int NroDiasxMes[12]; SIN DECLARAR ELEMENTOS

    //int NroDiasxMes[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int NroDiasxMes[12] = {31,
                            28,
                            31,
                            30,
                            31,
                            30,
                            31,
                            31,
                            30,
                            31,
                            30,
                            31};

    for (int i=0; i<12; i++)
        cout << "El elemento del Arreglo en el NroDiasxMes(" << i << ") es = " << NroDiasxMes[i] << endl;


    const int NRO_DIAS_SEMANA = 7;
    string DiasSemana[NRO_DIAS_SEMANA] = {"lunes","martes","miercoles","jueves","viernes","sabado","domingo"};

    cout << endl << endl;

    for (int i=0; i<7; i++)
        cout << "El elemento del Arreglo en el DiasSemana(" << i << ") es = " << DiasSemana[i] << endl;

    cout << endl << endl;

    // const : constante
    // int : entero / float, string (Tipo Variable)

    int Numeros[7] = {11, , , , , , 22};

    for (int i=0; i<7; i++)
        cout << "El elemento del Arreglo en el Numeros(" << i << ") es = " << Numeros[i] << endl;

    return 0;
}
