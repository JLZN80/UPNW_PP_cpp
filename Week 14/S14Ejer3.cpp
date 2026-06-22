#include <iostream>
#include <string>

using namespace std;

struct CClientes
{
    int IDCliente;
    string NomCliente;
    string TipoPersona; // PJ / PN
    double MtoIngreso;
};


int main()
{
    CClientes Cliente; // UN solo cliente
    CClientes Cartera[3]; // Un arreglo de 3 clientes

    for (int i=0; i<3; i++) {
        cout << "Ingrese el ID Cliente[" << i << "]: ";
        cin >> Cartera[i].IDCliente;
        cout << "Ingrese el NOMBRE Cliente[" << i << "]: ";
        cin >> Cartera[i].NomCliente;
        cout << "Ingrese el TIPO Cliente: PN / PJ [" << i << "]: ";
        cin >> Cartera[i].TipoPersona;
        cout << "Ingrese los INGRESOS del Cliente[" << i << "]: ";
        cin >> Cartera[i].MtoIngreso;
    }

    // MOSTRAR EL REPORTE DE CLIENTES

    cout << endl << "REPORTE DE LA CARTERA" << endl;
    cout << "===========================" << endl;
    for (int i=0; i<3; i++) {
        cout << Cartera[i].IDCliente << " / " << Cartera[i].NomCliente << " / " << Cartera[i].TipoPersona << " / " << Cartera[i].MtoIngreso << endl;
    }

    system("pause");
    return 0;
}
