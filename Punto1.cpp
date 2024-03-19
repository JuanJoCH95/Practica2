#include <iostream>

using namespace std;

int Punto1() {
    int valorInicial;
    int acumulador = 0;
    int dinero[10] = {50000, 20000, 10000, 5000, 2000, 1000, 500, 200, 100, 50};
    int cantidad[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

    cout << "Por favor ingrese la cantidad de dinero deseada: ";
    cin >> valorInicial;

    int valorAuxiliar = valorInicial;

    while (acumulador < valorInicial) {
        if(valorAuxiliar >= dinero[0]) {
            cantidad[0]++;
            acumulador = acumulador + dinero[0];
            valorAuxiliar = valorAuxiliar - dinero[0];
        } else if(valorAuxiliar >= dinero[1]) {
            cantidad[1]++;
            acumulador = acumulador + dinero[1];
            valorAuxiliar = valorAuxiliar - dinero[1];
        } else if(valorAuxiliar >= dinero[2]) {
            cantidad[2]++;
            acumulador = acumulador + dinero[2];
            valorAuxiliar = valorAuxiliar - dinero[2];
        } else if(valorAuxiliar >= dinero[3]) {
            cantidad[3]++;
            acumulador = acumulador + dinero[3];
            valorAuxiliar = valorAuxiliar - dinero[3];
        } else if(valorAuxiliar >= dinero[4]) {
            cantidad[4]++;
            acumulador = acumulador + dinero[4];
            valorAuxiliar = valorAuxiliar - dinero[4];
        } else if(valorAuxiliar >= dinero[5]) {
            cantidad[5]++;
            acumulador = acumulador + dinero[5];
            valorAuxiliar = valorAuxiliar - dinero[5];
        } else if(valorAuxiliar >= dinero[6]) {
            cantidad[6]++;
            acumulador = acumulador + dinero[6];
            valorAuxiliar = valorAuxiliar - dinero[6];
        } else if(valorAuxiliar >= dinero[7]) {
            cantidad[7]++;
            acumulador = acumulador + dinero[7];
            valorAuxiliar = valorAuxiliar - dinero[7];
        } else if(valorAuxiliar >= dinero[8]) {
            cantidad[8]++;
            acumulador = acumulador + dinero[8];
            valorAuxiliar = valorAuxiliar - dinero[8];
        } else if(valorAuxiliar >= dinero[9]) {
            cantidad[9]++;
            acumulador = acumulador + dinero[9];
            valorAuxiliar = valorAuxiliar - dinero[9];
        } else {
            acumulador = acumulador + valorAuxiliar;
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << dinero[i] << ": " << cantidad[i] << endl;
    }

    cout << "Faltante: " << valorAuxiliar << endl;

    return 0;
}
