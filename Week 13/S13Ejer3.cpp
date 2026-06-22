#include <iostream>
using namespace std;

int binarySearch(const int array[], int numElems, int value, int &NroIter)
{
    int first = 0,               // Primer elemento de la búsqueda
        last = numElems - 1,     // Último elemento del arreglo (Corregido el '−')
        middle,                  // Punto medio de la posición de búsqueda
        position = -1;           // Posición del valor buscado (Corregido el '−')

    NroIter = 0;

    bool found = false;          // Flag para detener la búsqueda

    while (!found && first <= last)
    {
        middle = (first + last) / 2; // Calculando el punto medio
        NroIter = NroIter + 1;

        if (array[middle] == value)  // Si el valor se encuentra en el medio
        {
            found = true;
            position = middle;
        }
        else if (array[middle] > value) // Si el valor está en la mitad inferior
        {
            last = middle - 1;       // Corregido el '−'
        }
        else
        {
            first = middle + 1;      // Si el valor está en la mitad superior
        }
    }
    return position;
}

int main()
{
    const int SIZE = 20; // tamanho del Arreglo

    int ACodigoAlum[SIZE] = {1009,2002,1003,1004,1005,2006,1007,1001,2008,1010,
                             2010,2001,2007,1002,2003,2009,1008,2004,2005,1006};
    int CodAlum;
    int nPosCodAlum;
    int NroIter;

    cout << "Ingresar el ID o Codigo de Alumno a Buscar: ";
    cin >> CodAlum;

    // Llamo a mi algoritmo de Busqueda Binaria:
    nPosCodAlum = binarySearch(ACodigoAlum, SIZE, CodAlum, NroIter);

    if (nPosCodAlum == -1) // No lo encontro
        cout << "Codigo de Alumno no existe en la Base de Datos";
    else
        cout << "El Codigo Ingresado se encuentra en la Posicion  = " << nPosCodAlum << " e Iteracion = " <<  NroIter;

    return 0;
}
