#include <iostream>

using namespace std;
/*
Ejercicio 5 - Dias de la semana con switch
Un sistema de agenda semanal permite ingresar un numero del 1 al 7 para mostrar el dia correspondiente. El
programa debe usar switch para mostrar: 1 Lunes, 2 Martes, 3 Miercoles, 4 Jueves, 5 Viernes, 6 Sabado y 7
Domingo. Si el usuario ingresa un numero fuera de ese rango, debe mostrar un mensaje de error indicando que
el dia es invalido.
*/
int main()
{
    int DiaSem;
    string NomDia;

    // Pedir el ingreso de numero del 1 al 7 para mostrar el dia correspondiente.

    cout << "Ingresa el Dia usando un numero del [1-7]: ";
    cin >> DiaSem;

    // Evaluar que numero y mostrar el Dia de la Semana:
    switch(DiaSem) {
        case 1: NomDia = "Lunes";
            break;
        case 2:
                NomDia = "Martes";
                break;
        case 3: NomDia = "Miercoles"; break;
        case 4: NomDia = "Jueves"; break;
        case 5: NomDia = "Viernes"; break;
        case 6: NomDia = "Sabado"; break;
        default: NomDia =  "Domingo"; break;
    }

    cout << "El dia de hoy es: " << NomDia << endl;

    return 0;
}
