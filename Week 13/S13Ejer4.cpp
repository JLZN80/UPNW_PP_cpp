#include <iostream>
using namespace std;


void bubbleSort(int arreglo[], int size) // Funcion generica de ordenamiento burbuja
{
    int temp; // Variable temporal para intercambiar valores

    for (int pasada = size - 1; pasada > 0; pasada--) // Controla las pasadas del algoritmo
    {
        for (int i = 0; i < pasada; i++) // Recorre el arreglo comparando elementos vecinos
        {
            if (arreglo[i] > arreglo[i + 1]) // Si el elemento actual es mayor que el siguiente
            {
                temp = arreglo[i]; // Guarda el elemento actual en una variable temporal
                arreglo[i] = arreglo[i + 1]; // Mueve el elemento menor hacia la izquierda
                arreglo[i + 1] = temp; // Coloca el elemento mayor hacia la derecha
            }
        }
    }
}

void mostrarArreglo(int arreglo[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arreglo[i] << " , ";

    cout << endl;
}

int main()
{
    const int SIZE = 6;

    int ATiempos[SIZE] = {35,20,50,15,40,25};

    //Mostrar como queda el arreglo despues de la Burbuja
    cout << "Arreglo antes de ordenar: " << endl;

    mostrarArreglo(ATiempos, SIZE);

    // Burbujear (ORDENAR) el Arreglo...
    bubbleSort(ATiempos, SIZE);

    //Mostrar como queda el arreglo despues de la Burbuja
    cout << endl;
    cout << "Arreglo despues de ordenar: " << endl;

    mostrarArreglo(ATiempos, SIZE);

    return 0;

}
