#include <iostream>

using namespace std;
string convertir(int num);

int Punto5() {
    int num;

    cout << "Por favor ingrese un numero entero: ";
    cin >> num;

    string numCaracter = convertir(num);

    cout << "Caracter: " << numCaracter << endl;
    return 0;
}

//Funcion para convertir un numero entero a cadena de caracteres
string convertir(int num) {
    string numCaracteres = to_string(num);
    return numCaracteres;
}
