#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    int contador = 0;
    bool enPalabra = false;

    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] != ' ' && !enPalabra) {
            contador++;
            enPalabra = true;
        }
        else if (texto[i] == ' ') {
            enPalabra = false;
        }
    }

    cout << "Numero de palabras: " << contador << endl;

    return 0;
}
