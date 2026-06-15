#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream ArchivoAmigos;
    string Nombre;
    string NombreArchivo;

    // 1) ABRIR LA CONEXION
    // El usuario debe decirme el nombre del archivo...

    cout << "Dame el Nombre del Archivo: ";
    cin >> NombreArchivo;

    //ArchivoAmigos.open("NombreAmigos.txt"); // Se donde esta el archivo
    ArchivoAmigos.open(NombreArchivo);    // El usuario ingrese la ruta del archivo

    // 2) PRoCESAR EL ARCHIVO
    cout << "Leyendo el Archivo..." << endl;

    ArchivoAmigos >> Nombre;    // Leer la primera del archivo y lo guardas en la variable Nombre
    cout << "Nombre del 1er Amigo: " << Nombre << endl; // Mostrando el resultado

    ArchivoAmigos >> Nombre;    // Leer la segunda del archivo y lo guardas en la variable Nombre
    cout << "Nombre del 2do Amigo: " << Nombre << endl; // Mostrando el resultado

    ArchivoAmigos >> Nombre;    // Leer la tercera del archivo y lo guardas en la variable Nombre
    cout << "Nombre del 3er Amigo: " << Nombre << endl; // Mostrando el resultado

    // #) CERRAR LA CONEXION
    ArchivoAmigos.close();

    return 0;
}
