#include <iostream>
#include <string>
using namespace std;

int BuscarSubCadena(string subcadena, string cadena) {
    if (subcadena.length() > cadena.length()) {
        return -1;
    }

    for (int i = 0; i <= cadena.length() - subcadena.length(); i++) {
        bool encontrada = true;

        for (int j = 0; j < subcadena.length(); j++) {
            if (cadena[i + j] != subcadena[j]) {
                encontrada = false;
                break;
            }
        }

        if (encontrada) {
            return i + 1;
        }
    }

    return -1;
}

int main() {
    string cadena, subcadena;

    cout << "Ingrese la cadena principal: ";
    getline(cin, cadena);

    cout << "Ingrese la subcadena a buscar: ";
    getline(cin, subcadena);

    int posicion = BuscarSubCadena(subcadena, cadena);

    cout << "\nCadena: " << cadena << endl;
    cout << "Subcadena: " << subcadena << endl;

    if (posicion != -1) {
        cout << "La subcadena se encuentra en la posicion: " << posicion << endl;
    } else {
        cout << "La subcadena no se encontro (-1)" << endl;
    }

    cout << "\n--- Ejemplo del ejercicio ---" << endl;
    cout << "BuscarSubCadena(\"oool\", \"hooola\") = "
         << BuscarSubCadena("oool", "hooola") << endl;

    return 0;
}
