#include <iostream>
#include <ctime>

using namespace std;
char *generarArreglo(char arreglo[], int size);

int Punto2() {
    char letras[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
                       'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int cantidad[26] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char arreglo[200];
    char *ptr = generarArreglo(arreglo, 200);

    //Contamos cuantas veces se repite cada letra en el arreglo
    for(int i = 0; i < 200; i++) {
        for(int j = 0; j< 26; j++) {
            if(ptr[i] == letras[j]) {
                cantidad[j]++;
            }
        }
    }

    cout << "Arreglo: ";
    for(int i = 0; i < 200; i++) {
        cout << ptr[i];
    }

    cout << endl;

    for(int i = 0; i < 26; i++) {
        cout << letras[i] << ": " << cantidad[i] << endl;
    }
    return 0;
}

//Funcion para generar el arreglo de 200 letras mayusculas aleatorias
char *generarArreglo(char arreglo[], int size) {
    srand(time(NULL));
    string letras = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    for(int i = 0; i < size; i++) {
        char letra = letras[rand() % letras.size()];
        arreglo[i] = letra;
    }
    return arreglo;
}
