#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string nombre;
    double peso, minutos, met, calorias;
    int actividad;
    string nombreActividad, clasificacion;

    cout << "=== APP FITNESS: CALORIAS QUEMADAS ===" << endl;
    cout << "Ingrese su nombre: ";
    cin >> nombre;

    cout << "Ingrese su peso en kg: ";
    cin >> peso;

    cout << "Tipo de actividad:" << endl;
    cout << "1. Caminar" << endl;
    cout << "2. Correr" << endl;
    cout << "3. Ciclismo" << endl;
    cout << "4. Natacion" << endl;
    cout << "Seleccione una opcion: ";
    cin >> actividad;

    cout << "Ingrese minutos practicados: ";
    cin >> minutos;

    if (actividad == 1) {
        met = 3.5;
        nombreActividad = "Caminar";
    } else if (actividad == 2) {
        met = 9.0;
        nombreActividad = "Correr";
    } else if (actividad == 3) {
        met = 7.5;
        nombreActividad = "Ciclismo";
    } else if (actividad == 4) {
        met = 8.0;
        nombreActividad = "Natacion";
    } else {
        met = 3.5;
        nombreActividad = "Caminar por defecto";
    }

    calorias = (met * peso * minutos) / 60.0;

    if (calorias < 200) {
        clasificacion = "Esfuerzo leve";
    } else if (calorias <= 400) {
        clasificacion = "Buen entrenamiento";
    } else {
        clasificacion = "Quema total";
    }

    cout << fixed << setprecision(2);
    cout << "\n=== RESULTADO FITNESS ===" << endl;
    cout << "Usuario: " << nombre << endl;
    cout << "Peso: " << peso << " kg" << endl;
    cout << "Actividad: " << nombreActividad << endl;
    cout << "Minutos: " << minutos << endl;
    cout << "MET utilizado: " << met << endl;
    cout << "Calorias quemadas: " << calorias << endl;
    cout << "Clasificacion: " << clasificacion << endl;

    system("pause");
    return 0;
}