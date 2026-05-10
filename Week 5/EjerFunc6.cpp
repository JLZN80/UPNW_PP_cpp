#include <iostream>

using namespace std;

/*9. Aplicar descuento modificando el precio original
    Crear una función que reciba un precio por referencia y un porcentaje de descuento.
    La función debe modificar directamente el precio aplicando el descuento
*/

void ModificarPrecio(double &PrecioOrig, double Descuento)
{
    PrecioOrig = PrecioOrig * (1 - Descuento);
    cout << "Precio Original (Dentro de la Funcion): " << PrecioOrig << endl;
}
int main()
{
    double PrecioOrig, Descuento;

    cout << "Ingresa el Precio Original: ";
    cin >> PrecioOrig;

    cout << "Ingresa el Descuento en %: ";
    cin >> Descuento;

    cout << "Precio Original: " << PrecioOrig << endl;

    ModificarPrecio( PrecioOrig, Descuento);

    cout << "Precio Modificado: " << PrecioOrig << endl;


    return 0;
}
