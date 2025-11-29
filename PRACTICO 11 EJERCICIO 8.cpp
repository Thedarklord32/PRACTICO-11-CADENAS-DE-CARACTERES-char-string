#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string cadenaFinal = "";

    cout << "Cuantas palabras desea ingresar? ";
    cin >> n;
    cin.ignore();

    for (int i = 0; i < n; i++) {
        string palabra;
        cout << "Palabra " << (i + 1) << ": ";
        getline(cin, palabra);

        if (i == 0) {
            cadenaFinal = palabra;
        } else {
            cadenaFinal = cadenaFinal + " " + palabra;
        }
    }

    cout << "\nCadena resultante: " << cadenaFinal << endl;

    return 0;
}
