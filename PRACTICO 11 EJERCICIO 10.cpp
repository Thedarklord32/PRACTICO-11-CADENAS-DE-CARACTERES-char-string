#include <iostream>
#include <string>
using namespace std;

bool esVocal(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int main() {
    string texto;

    cout << "Ingrese un texto: ";
    getline(cin, texto);

    int contador = 0;

    cout << "Pares de vocales encontrados: ";

    for (int i = 0; i < texto.length() - 1; i++) {
        if (esVocal(texto[i]) && esVocal(texto[i + 1])) {
            contador++;
            cout << texto[i] << texto[i + 1];
            if (contador < 2) {
                cout << ", ";
            }
        }
    }

    cout << endl << "Total de pares de vocales juntas: " << contador << endl;

    return 0;
}
