#include <iostream>

using namespace std;
int convertirNumero(string numRomano);

int Punto10() {
    string numRomano;
    int resultado = 0;

    cout << "Ingrese un numero romano: ";
    cin >> numRomano;

    resultado = convertirNumero(numRomano);

    cout << "El numero ingresado fue: " << numRomano << endl;
    cout << "Que corresponde a: " << resultado << endl;
    return 0;
}

//Funcion para convertir un numero romano a arabigo
int convertirNumero(string numRomano) {
    char romanos[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
    int arabigos[7] = {1, 5, 10, 50, 100, 500, 1000};
    int posicion1;
    int posicion2;
    int suma;
    int resultado = 0;

    for(int i = 0; i < numRomano.length(); i++) {
        char caracterA = numRomano[i];
        char caracterB = numRomano[i + 1];

        if(caracterB == NULL) {
            break;
        }

        for(int j = 0; j < 7; j++) {
            if(caracterA == romanos[j]) {
                posicion1 = j;
                break;
            }
        }

        for(int j = 0; j < 7; j++) {
            if(caracterB == romanos[j]) {
                posicion2 = j;
                break;
            }
        }

        if(arabigos[posicion1] >= arabigos[posicion2]) {
            suma = arabigos[posicion1] + arabigos[posicion2];
            resultado = resultado + suma;
        } else {
            suma = arabigos[posicion2] - arabigos[posicion1];
            resultado = resultado + suma;
        }
    }
    return resultado;
}
