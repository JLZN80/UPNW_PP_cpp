
#include <iostream>
using namespace std;

int main()
{
    double v1, v2, v3;
    double MinV, MaxV;

    cout << "Ingresa los 3 Valores a comparar: ";
    cin >> v1 >> v2 >> v3;

    // el menor valor
    if (v1 < v2)
        if (v1 < v3)
            MinV = v1;
        else
            MinV = v3;
    else
        if (v2 < v3)
            MinV = v2;
        else
            MinV = v3;

    // el mayor valor
    if (v1 > v2)
        if (v1 > v3)
            MaxV = v1;
        else
            MaxV = v3;
    else
        if (v2 > v3)
            MaxV = v2;
        else
            MaxV = v3;

    cout << "El Menor es: " << MinV << endl;
    cout << "El Mayor es: " << MaxV;

   return 0;
}
