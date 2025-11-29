#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    bool nuevaPalabra = true;

    for (int i = 0; i < texto.length(); i++) {
        if (nuevaPalabra && isalpha(texto[i])) {
            texto[i] = toupper(texto[i]);
            nuevaPalabra = false;
        }
        else if (texto[i] == ' ') {
            nuevaPalabra = true;
        }
    }

    cout << "Texto con primeras letras en mayuscula: " << texto << endl;

    return 0;
}
