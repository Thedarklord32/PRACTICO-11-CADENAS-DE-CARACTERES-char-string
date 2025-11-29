#include <iostream>
#include <string>
using namespace std;

string SubCadena(string cadena, int posicion, int longitud) {
    int inicio = posicion - 1;

    if (inicio < 0 || inicio >= cadena.length() || longitud <= 0) {
        return "";
    }

    string resultado = "";
    for (int i = inicio; i < cadena.length() && i < inicio + longitud; i++) {
        resultado += cadena[i];
    }

    return resultado;
}

int main() {
    string texto;
    int posicion, longitud;

    cout << "Ingrese una cadena: ";
    getline(cin, texto);

    cout << "Ingrese la posicion de inicio: ";
    cin >> posicion;

    cout << "Ingrese la longitud: ";
    cin >> longitud;

    string resultado = SubCadena(texto, posicion, longitud);

    cout << "Cadena original: " << texto << endl;
    cout << "Subcadena desde posicion " << posicion << " con longitud " << longitud << ": " << resultado << endl;

    cout << "\n--- Ejemplo del ejercicio ---" << endl;
    cout << "SubCadena(\"hoooola\", 5, 3) = \"" << SubCadena("hoooola", 5, 3) << "\"" << endl;

    return 0;
}
