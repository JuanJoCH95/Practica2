#include <iostream>

using namespace std;

int Punto6() {
    string cadena;

    cout << "Escriba una cadena de caracteres: ";
    cin >> cadena;

    string cadenaOriginal = cadena;

    for (int i = 0; i < cadena.length(); i++) {
        cadena[i] = toupper(cadena[i]);
    }

    cout << "Original: " << cadenaOriginal << endl;
    cout << "En Mayuscula: " << cadena << endl;
    return 0;
}
