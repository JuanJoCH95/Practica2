#include <iostream>

using namespace std;
string eliminarRepetidos(string cadena);

int Punto7() {
    string cadena;

    cout << "Ingrese una cadena de caracteres: ";
    cin >> cadena;

    string palabra = eliminarRepetidos(cadena);

    cout << "Original: " << cadena << endl;
    cout << "Sin repetidos: " << palabra << endl;
    return 0;
}

//Funcion para eliminar los caracteres repetidos
string eliminarRepetidos(string cadena) {
    string palabraNew;
    bool repetida = false;
    palabraNew = cadena[0];

    for(int i = 1; i < cadena.length(); i++) {
        for(int j = i; j > 0; j--) {
            if(cadena[i] == cadena[j-1]) {
                repetida = true;
            }
        }

        if(repetida != true) {
            palabraNew = palabraNew + cadena[i];
        }
        repetida = false;
    }
    return  palabraNew;
}
