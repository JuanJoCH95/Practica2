#include <iostream>
#include <sstream>

using namespace std;
int sumar(string cadena, int n);

int Punto9() {
    int n;
    string cadena;
    int suma;

    cout << "Escriba un numero entero: ";
    cin >> n;

    cout << "Escriba una cadena de caracteres de numeros: ";
    cin >> cadena;

    suma = sumar(cadena, n);

    cout << "Original: " << cadena << endl;
    cout << "Suma: " << suma << endl;
    return 0;
}

//Funcion que separa la cadena de caracteres en numeros de n cifras y los suma
int sumar(string cadena, int n) {
    int suma = 0;
    int resto = 1;

    while(resto != 0) {
        resto = cadena.length() % n;

        if(resto != 0) {
            cadena = "0" + cadena;
        }
    }

    int cantidad = cadena.length() / n;
    int numeros[cantidad];
    int apuntador = 0;
    string num = "";

    for(int i = 0; i < cantidad; i++) {
        while(num.length() < n) {
            num = num + cadena[apuntador];
            apuntador++;
        }

        istringstream(num) >> numeros[i];
        num = "";
    }

    for(int i = 0; i < cantidad; i++) {
        suma = suma + numeros[i];
    }

    return suma;
}
