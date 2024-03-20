#include <iostream>

using namespace std;

int Punto13() {
    int estrellas = 0;
    int op;
    int matriz[6][8] = {{0,3,4,0,0,0,6,8}, {5,13,6,0,0,0,2,3}, {2,6,2,7,3,0,10,0},
                        {0,0,4,15,4,1,6,0}, {0,0,7,12,6,9,10,4}, {5,0,6,10,6,4,8,0}};

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 8; j++) {
            cout << " " << matriz[i][j] << " ";
        }
        cout << endl;
    }

    for(int i = 0; i < 6; i++) {
        for(int j = 0; j < 8; j++) {
            op = ((matriz[i][j]) + (matriz[i][j-1]) + (matriz[i][j+1]) + (matriz[i-1][j]) + (matriz[i+1][j])) / 5;

            if(op > 6) {
                estrellas++;
            }
        }
    }

    cout << "Numero de estrellas encontradas en la imagen: " << estrellas << endl;
    return 0;
}
