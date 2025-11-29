#include <iostream>
#include <string>
using namespace std;

string BorraCaracterDeCadena(string cadena, char caracter) {
    string resultado = "";

    for (int i = 0; i < cadena.length(); i++) {
        if (cadena[i] != caracter) {
            resultado += cadena[i];
        }
    }

    return resultado;
}

int main() {
    string texto;
    char caracter;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    cout << "Que caracter desea borrar?: ";
    cin >> caracter;

    string resultado = BorraCaracterDeCadena(texto, caracter);

    cout << "\nTexto original: \"" << texto << "\"" << endl;
    cout << "Caracter a borrar: '" << caracter << "'" << endl;
    cout << "Texto resultante: \"" << resultado << "\"" << endl;

    return 0;
}
