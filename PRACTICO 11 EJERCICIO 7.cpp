#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string palabra;

    cout << "Ingrese una palabra: ";
    cin >> palabra;

    sort(palabra.begin(), palabra.end());

    cout << "Palabra original: " << palabra << endl;
    cout << "Palabra ordenada: " << palabra << endl;

    return 0;
}
