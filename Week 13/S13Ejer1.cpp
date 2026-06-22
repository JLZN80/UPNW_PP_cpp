#include <iostream>
using namespace std;


int linearSearch(const int arr[], int size, int value) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == value) {
            return i; // Retorna la posicion de inmediato si lo encuentra
        }
    }
    return -1; // Retorna -1 si termina el bucle sin exito
}

int main()
{
    // Busca en la matriz de cinco elementos para encontrar una puntuacion de 100
    const int SIZE = 5;
    int Puntajes[SIZE] = {65, 15, 95, 115, 50};
    int PosPuntaje;

    PosPuntaje = linearSearch(Puntajes, SIZE, 200);

    // El algoritmo de Busqueda, SI NO LO ENCENUTRA ME DEVUELME: -1
    // Y SI LO ENCUENTRA, me devuelve la Posicion
    if (PosPuntaje == -1)
        cout << "No se encontro el Puntaje Buscado: " << "200" << " en el Arreglo!";

    else
        cout << "El Mayor Puntaje que obtuviste se encuentra en la Posicion: " << PosPuntaje;

    system("pause");
    return 0;
}
