#include <iostream>

using namespace std;
bool compararCadenas(string cadena1, string cadena2);

int Punto3() {
    string cadena1;
    string cadena2;

    cout << "Por favor ingrese una cadena de caracteres: ";
    cin >> cadena1;

    cout << "Por favor ingrese otra cadena de caracteres: ";
    cin >> cadena2;

    bool sonIguales = compararCadenas(cadena1, cadena2);

    if(sonIguales) {
        cout << "Las cadenas de caracteres son iguales." << endl;
    } else {
        cout << "Las cadenas de caracteres NO son iguales." << endl;
    }
    return 0;
}

//Funcion para comparar si 2 cadenas de caracteres son iguales o no
bool compararCadenas(string cadena1, string cadena2) {
    bool sonIguales = false;
    int contador = 0;

    if(cadena1.length() == cadena2.length()) {
        for(int i = 0; i < cadena1.length(); i++) {
            if(cadena1[i] == cadena2[i]) {
                contador++;
            }
        }

        if(contador == cadena1.length()) {
            sonIguales = true;
        }
    }
    return sonIguales;
}
