#include <iostream>
// Necesitamos inlcuir la Libreria de Archivos...
#include <fstream> // TRabajar tanto Lectura Y/O Escritura

using namespace std;

int main()
{
    //1) ABRIR LA CONEXION / ABRIR EL ARCHIVO

    ofstream MusicosFavoritos;  // Nombre de mi Variable Archivo

    MusicosFavoritos.open("ListaDeFavoritos.txt");  // Recuerda que puedes darle una ubicacion especifica

    cout << "Escribiendo los datos en el Archivo..." << endl;

    //2) PROCESAMIENTO DEL ARCHIVO: LEER LA INFORMACION O ESCRIBES LA INFORMACION

    MusicosFavoritos << "Soda Stereo" << endl;
    MusicosFavoritos << "Mar de Copas" << endl;
    MusicosFavoritos << "Libido" << endl;
    MusicosFavoritos << "NSQ Y NSC" << endl;

    //3) CERRAR LA CONEXION

    MusicosFavoritos.close();

    cout << "Grabacion Finalizada!";

    return 0;
}
