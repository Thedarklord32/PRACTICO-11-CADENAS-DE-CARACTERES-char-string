#include <iostream>
#include <string>
using namespace std;

int main() {
    string cadena1, cadena2;

    cout << "Ingrese la primera cadena: ";
    cin >> cadena1;

    cout << "Ingrese la segunda cadena: ";
    cin >> cadena2;

    // Mezclar las cadenas (concatenar)
    string mezcla = cadena1 + cadena2;

    cout << "Cadena 1: " << cadena1 << endl;
    cout << "Cadena 2: " << cadena2 << endl;
    cout << "Mezcla: " << mezcla << endl;

    return 0;
}
