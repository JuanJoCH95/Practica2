#include <iostream>

using namespace std;
void mostrar();
void reservar();

char filas[15] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
int asientos[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
int disponibles[15][20] = {{1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                           {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                           {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                           {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1},
                           {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}};

int Punto11() {
    int opcion;

    while(true) {
        cout << "Bienvenido al cine, seleccione una de las siguientes opciones:" << endl;
        cout << "1 - Mostrar asientos disponibles." << endl;
        cout << "2 - Reservar asiento." << endl;
        cout << "3 - Salir." << endl;
        cin >> opcion;

        if(opcion == 1) {
            mostrar();
        } else if(opcion == 2) {
            reservar();
        } else if(opcion == 3) {
            break;
        } else {
            cout << "Opcion no valida." << endl;
        }
    }
    return 0;
}

//Funcion que muestra los asientos disponibles y reservados
void mostrar() {
    cout << endl;
    cout << "Disponibles(-), Reservados (+)" << endl;
    cout << "  ";
    for(int i = 0; i < 20; i++) {
        cout << " " << asientos[i] << " ";
    }

    cout << endl;
    for(int i = 0; i < 15; i++) {
        cout << filas[i] << " ";
        for(int j = 0; j < 20; j++) {
            if(disponibles[i][j] == 0 && j < 9) {
                cout << " " << "+" << " ";
            } else if(disponibles[i][j] == 0) {
                cout << " " << "++" << " ";
            } else if(disponibles[i][j] != 0 && j < 9){
                cout << " " << "-" << " ";
            } else if(disponibles[i][j] != 0) {
                cout << " " << "--" << " ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

//Funcion para reservar un asiento
void reservar() {
    char fila;
    int asiento;
    int posicionF = 0;
    int posicionA = 0;

    cout << endl;
    cout << "Seleccione la fila: ";
    cin >> fila;

    cout << "Seleccione el asiento: ";
    cin >> asiento;
    cout << endl;

    for(int i = 0; i < 15; i++) {
        if(fila == filas[i]) {
            posicionF = i;
            break;
        }
    }

    for(int i = 0; i < 20; i++) {
        if(asiento == asientos[i]) {
            posicionA = i;
            break;
        }
    }

    for(int i = 0; i < 15; i++) {
        for(int j = 0; j < 20; j++) {
            if(posicionF == i && posicionA == j) {
                if(disponibles[i][j] == 0) {
                    cout << "El asiento " << fila << "-" << asiento << " ya se encuentra reservado." << endl;
                    break;
                } else {
                    disponibles[i][j] = 0;
                    cout << "Reserva realizada con exito!" << endl;
                    break;
                }
            }
        }
    }
}
