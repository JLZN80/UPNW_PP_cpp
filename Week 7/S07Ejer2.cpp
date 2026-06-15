#include <iostream>

using namespace std;

int main()
{
    char feedGrade;

    cout << " Ingresa el tipo de comida [A, B, C]: ";
    cin >> feedGrade;

    switch (feedGrade) // switch (upper(feedGrade) / lower(feedGrade)
    {
        case 'a':
        case 'A':
            cout << "El precio es S/. 30 por Kg";
            break;
        case 'b':
        case 'B':
            cout << "El precio es S/. 20 por Kg";
            break;
        case 'c':
        case 'C':
            cout << "El precio es S/. 15 por Kg";
            break;
        default:
            cout << "Selección Invalida!";
    }

    return 0;
}
