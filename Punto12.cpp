#include <iostream>

using namespace std;

int Punto12() {
    int matriz[3][3];
    int constante = 0;
    bool esMagico;

    //Llenamos la matriz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j< 3; j++) {
            cout << "Ingrese numero: ";
            cin >> matriz[i][j];
        }
    }

    constante = matriz[0][0] + matriz[0][1] + matriz[0][2];

    //Validasmo la suma de las filas
    for(int i = 0; i < 3; i++) {
        if((matriz[i][0] + matriz[i][1] + matriz[i][2]) == constante) {
            esMagico = true;
        } else {
            esMagico = false;
        }
    }

    //Validasmo la suma de las columnas
    for(int i = 0; i < 3; i++) {
        if((matriz[0][i] + matriz[1][i] + matriz[2][i]) == constante) {
            esMagico = true;
        } else {
            esMagico = false;
        }
    }

    //Imprimimos la matriz
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j< 3; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }

    if(esMagico) {
        cout << "La matriz es un cuadrado magico" << endl;
    } else {
        cout << "La matriz NO es un cuadrado magico" << endl;
    }
    return 0;
}
