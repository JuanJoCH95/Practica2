#include <iostream>
#include <sstream>

using namespace std;
int convertir(string cadena);

int Punto4() {
    string cadena;

    cout << "Por favor ingrese una cadena de caracteres numericos: ";
    cin >> cadena;

    int num = convertir(cadena);

    if(num != NULL) {
        cout << "Numero: " << num << endl;
    } else {
        cout << "Los caracteres que ingreso no son numericos." << endl;
    }
    return 0;
}

//Funcion para convertir una cadena de caracteres a numero entero
int convertir(string cadena) {
    bool esNumero = true;
    int num = NULL;

    //Primero validamos que la cadena si sea de caracteres numericos
    for(int i = 0; i < cadena.length(); i++) {
        char caracter = cadena[i];

        if(!(caracter == '0' || (caracter - 48 > 0 && caracter - 48 < 10))) {
            esNumero = false;
        }
    }

    if(esNumero) {
        istringstream(cadena) >> num;
    }
    return num;
}
