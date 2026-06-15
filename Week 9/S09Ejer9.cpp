#include <iostream>

using namespace std;

int main()
{
    int nota;
    bool Flag;

  cout << "Ingresa tu Nota del Curso (Solo Valores de 0 a 20): " ;
  cin >>  nota;

  Flag = true;

  while (Flag) {

    cout << "Nota no es correcta. Reingresa tu Nota: ";
    cin >> nota;

    if ((nota < 0) || (nota > 20))
        continue;
        xxxxxx
      xxxxxx

        ////
        ////
        /////

  }
    cout << endl << " Nota Correcta!";
    return 0;
}
