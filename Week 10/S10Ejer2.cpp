#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream ArchivoTexto;
    int Nro1, Nro2, Nro3;

    // 1) ABRIR LA CONEXION
    ArchivoTexto.open("ListaDeNumeros.txt");

    // 2) PROCESAR EL ARCHIVO
    cout << "Ingresa Un Primer Numero: ";
    cin >> Nro1;

    cout << "Ingresa un Segundo Numero: ";
    cin >> Nro2;

    cout << "ingresa un Tercer Numero: ";
    cin >> Nro3;

    ArchivoTexto << "El Primero Numero Ingresado es: " << Nro1 << endl;
    ArchivoTexto << "El Segundo Numero Ingresado es: " << Nro2 << endl;
    ArchivoTexto << "El Tercer Numero Ingresado es: " << Nro3 << endl;

    // 3) CERRAR LA CONEXION
    ArchivoTexto.close();

    cout << "Grabacion Finalizada!";

    return 0;
}
