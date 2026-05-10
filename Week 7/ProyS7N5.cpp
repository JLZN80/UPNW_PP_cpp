#include <iostream>

using namespace std;

int main()
{
    string Nombre, NombrePel;
    char clasif;
    int edad, x;
    bool FlgPermitido = false;

    // Pedimos la Informacion
    cout << "Ingresa Nombre Usuario: ";
    cin >> Nombre;
    cout << "Ingresa Edad del Usuario: ";
    cin >> edad;
    cout << "Ingresa Nombre de la Pelicula: ";
    cin >> NombrePel;
    cout << "Ingresa Clasificacion Pelicula [G | P(G) | PG(1)3 | R | (N)C17]: ";
    cin >> clasif;

    // El procesamiento
    switch (clasif)
    {
        case 'G':
        case 'P':
            FlgPermitido = true;
            break;
        case '1':
            if (edad >= 13)
               FlgPermitido = true;
            else
                x = 13 - edad;
            break;
        case 'R':
            if (edad >= 17)
                FlgPermitido = true;
            else
                x = 17 - edad;
            break;
        case 'N':
            if (edad >= 18)
                FlgPermitido = true;
            else
                x = 18 - edad;
            break;
    }

    // Muestro la Salida...
    //if (FlgPermitido == true)
    if (FlgPermitido)
        cout << "Distruta: " << NombrePel << endl;
    else
        cout << "Contenido Restringido. Te faltan " << x << " años!";

    return 0;
}
