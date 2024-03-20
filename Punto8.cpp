#include <iostream>

using namespace std;

int Punto8() {
    string cadena;
    string texto;
    string numero;

    cout << "Escriba una cadena de caracteres y numeros: ";
    cin >> cadena;

    for(int i= 0; i < cadena.length(); i++) {
        char caracter = cadena[i];

        if(caracter == '0' || (caracter - 48 > 0 && caracter - 48 < 10)) {
            numero = numero + caracter;
        } else {
            texto = texto + caracter;
        }
    }

    cout << "Original: " << cadena << endl;
    cout << "Texto: " << texto << endl;
    cout << "Numero: " << numero << endl;
    return 0;
}
