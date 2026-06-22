#include <iostream>
using namespace std;

#include <iostream>

// La función selectionSort ordena un arreglo int en orden ascendente
void selectionSort(int array[], int size)
{
    int minIndex, minValue;

    // Se corrigió el guion '−' por el operador '-' estándar
    for (int start = 0; start < (size - 1); start++)
    {
        minIndex = start;
        minValue = array[start];

        for (int index = start + 1; index < size; index++)
        {
            if (array[index] < minValue)
            {
                minValue = array[index];
                minIndex = index;
            }
        }
        // Llama a la función swap para intercambiar los elementos
        swap(array[minIndex], array[start]);
    }
}

// La función intercambia las variables 'a' y 'b' en memoria utilizando referencias
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    const int SIZE = 6;

    int ANotas[SIZE] = {15, 11, 18, 13, 20, 16};


    //MUESTRO LAS NOTAS SIN ORDEN
    cout << "Mostrar las Notas sin Ordenamiento: ";
    for (int i=0; i<SIZE; i++)
        cout << ANotas[i] << "  ";

    //ORDENAR NOTAS BY ALGORITMO DE INSERCION
    selectionSort(ANotas, SIZE);


    //MUESTRO LAS NOTAS SIN ORDEN
    cout << endl << "Mostrar las Notas CON Ordenamiento: ";
    for (int i=0; i<SIZE; i++)
        cout << ANotas[i] << "  ";


    return 0;
}
