#include <iostream>
#include <string>
using namespace std;

int main() {
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    string sinVocales = "";

    for (int i = 0; i < texto.length(); i++) {
        char c = texto[i];

        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            sinVocales += c;
        }
    }

    cout << "Texto original: " << texto << endl;
    cout << "Texto sin vocales: " << sinVocales << endl;

    return 0;
}
