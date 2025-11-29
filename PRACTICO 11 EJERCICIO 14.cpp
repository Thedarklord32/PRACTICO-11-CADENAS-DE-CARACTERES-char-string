#include <iostream>
#include <string>
using namespace std;

string Codifica(string cadena, int n) {
    string resultado = "";

    for (int i = 0; i < cadena.length(); i++) {
        char c = cadena[i];

        if (c >= 'a' && c <= 'z') {
            resultado += 'a' + (c - 'a' + n) % 26;
        }
        else if (c >= 'A' && c <= 'Z') {
            resultado += 'A' + (c - 'A' + n) % 26;
        }
        else {
            resultado += c;
        }
    }

    return resultado;
}

int main() {
    string texto;
    int desplazamiento;

    cout << "Ingrese el texto a codificar: ";
    getline(cin, texto);

    cout << "Ingrese el desplazamiento (n): ";
    cin >> desplazamiento;

    string textoCodificado = Codifica(texto, desplazamiento);

    cout << "\nTexto original: " << texto << endl;
    cout << "Desplazamiento: " << desplazamiento << endl;
    cout << "Texto codificado: " << textoCodificado << endl;

    cout << "\n--- Ejemplo del ejercicio ---" << endl;
    cout << "Codifica(\"hola, mundo\", 3) = \""
         << Codifica("hola, mundo", 3) << "\"" << endl;

    return 0;
}
