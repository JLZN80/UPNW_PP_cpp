#include <iostream>

using namespace std;

int main()
{
    int nota;               // se asume que las notas son enteras
    char calificativo;      // se asume el calificativo como caracter(1)

    int MAX_NOTA = 100;
    int MIN_NOTA = 0;

    // El usuario debe ingresar la nota numerica (0 a 100)
    cout << "Hola. Ingresa tu Nota de 0 a 100: " << endl;
    cin >> nota;

    if (nota >= MIN_NOTA && nota <= MAX_NOTA) // Controles o VARIABLES DE CONTROL
    {

    if (nota >= 90)
        calificativo = 'A';
    else
        if (nota >= 80 && nota < 90)
            calificativo = 'B';
        else
            if (nota >= 70 && nota < 80)
                calificativo = 'C';
            else
                if (nota >= 60 && nota < 70)
                    calificativo = 'D';
                else
                    calificativo = 'F';

    cout << "El Calificativo en Letras es: " << calificativo;

    }

    return 0;
}
