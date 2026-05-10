#include <iostream>
using namespace std;

int CalcularSlicePorPersona(int rebanadas, int personas) {

    int SlicexPersona;
    SlicexPersona = rebanadas / personas;
    return SlicexPersona;
}

int CalcularSliceSobrantes(int rebanadas, int personas) {

    int sobrante;
    sobrante = rebanadas % personas; // resto, residuo, MOD, ( 17 / 3 = 5 con "residuo 2" )
    return sobrante;
}

int main()
{
    int rebanadas, personas;

    cout << "Ingrese el Nro de Rebanas en la Pizza: ";
    cin >> rebanadas;

    cout << "Ingrese la cantidad de personas: ";
    cin >> personas;

    if (personas > 0){
        // escenario correcto
        int NroSliceXPersona = CalcularSlicePorPersona(rebanadas,personas);
        int SliceSobrantes = CalcularSliceSobrantes(rebanadas, personas);

        cout << "A cada persona le tocara: " << NroSliceXPersona << " Slices" << endl;
        cout << " pero sobraran: " << SliceSobrantes << " slices.";

    } else {
        // escenario overflow - cuidar
        cout << "Error: La cantidad de Personas no puede ser 0";
    }

    return 0;
}
