
// Crea un programa que pregunte tu edad y peso, y luego los muestre en una frase coherente.

#include <iostream>
using namespace std;

int PedirEdad() {
    int edad;

    std::cout << "Ingresa tu Edad: ";
    cin >> edad;
    return edad;
}

float PedirPeso() {
    float peso;

    cout << "Ingresa tu Peso: ";
    cin >> peso;
    return peso;
}

void ImprimirMensaje(int edad, float peso) {

    cout << "Mi edad es: " << edad << " y mi peso es: " << peso;

    cin.ignore();
    cin.get();
}

int main()
{
    int edad;
    float peso;

    edad = PedirEdad();
    peso = PedirPeso();
    ImprimirMensaje(edad, peso);

    return 0;

}
