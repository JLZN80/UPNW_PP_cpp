#include <iostream>

using namespace std;

int main()
{
    int Nro, NroSecreto;
    bool Flag = true;
    int NroIntentos = 0;

    NroSecreto = 50;  // Numero Oculto

    // Quiero que el bucle se ejecute AL MENOS 1 VEZ
    // Entonces debo usar Banderas (FLAG)

    NroIntentos = 1;

    while (Flag) { // Mientras no lo encuentre, ENCIENDE LA BANDERA

        cout << " ADIVINA EL NUMERO ENTRE (1-100): " << endl;
        cin >> Nro;

        if (Nro == NroSecreto) {
            Flag = false;   // Si lo encontre, APAGA LA BANDERA
            break;
            //continue;          // Termina el BUCLE cuando lo Necesitas
        }
        else {

            if (Nro > NroSecreto)
                cout << "MUY ALTO... Escoge un Valor Menor!";
            else
                cout << "MUY BAJO... Escoge un Valor Mayor!";
        }

         //NroIntentos = NroIntentos + 1;
         NroIntentos += 1;

    }

    cout << "Encontraste el Numero Secreto en : " << NroIntentos << " Intentos!";

    return 0;
}
