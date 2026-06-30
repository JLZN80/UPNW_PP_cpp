#include <iostream>

using namespace std;

struct Direccion {      // AVENIDA JAVIER PRADO 545 - URB LAS FLORES
    string TipoDirec;   // Avenida, Calle, Jiron, Pasaje, etc
    string NomDirec;    // Miguel Grau, Canada, Javier Prado, etc
    int NroDirec;       // 123, 546, etc
    string UrbDirec;    // Lima Cercado, Salamanca, Covima, etc
};

struct Alumno {

    int CodAlumno;
    string NomAlumno;
    string ApeAlumno;
    //string Direccion;   // Una sola Cadena -> Estructurarla (Permtir que se conforme de diferente tipo
    Direccion DirAlumno;
};

int main()
{
    Alumno Alum;

    Alum.CodAlumno = 1001;
    Alum.NomAlumno = "Jorge";
    Alum.ApeAlumno = "Zambrano";

    // Complete la Direccion usando una sola Variable...
    // Alum.Direccion = "Avenida Javier Prado 545 URB LAS FLORES";

    // Usando una estructura de estructura
    Alum.DirAlumno.TipoDirec = "Avenida";
    Alum.DirAlumno.NomDirec = "Javier Prado";
    Alum.DirAlumno.NroDirec = 545;
    Alum.DirAlumno.UrbDirec = "URB LAS FLORES";

    cout << "DATOS DEL ALUMNO:" << endl;
    cout << "=================" << endl;
    cout << "Codigo: " << Alum.CodAlumno << endl;
    cout << "Nombre: " << Alum.NomAlumno << endl;
    cout << "Apellido: " << Alum.ApeAlumno << endl;
    cout << "Direccion: " << Alum.DirAlumno.TipoDirec << " " << Alum.DirAlumno.NomDirec << " " << Alum.DirAlumno.NroDirec << " " << Alum.DirAlumno.UrbDirec << endl;

    system("pause");
    return 0;
}
