#include <iostream>

using namespace std;

int Punto14() {
    int num = 0;
    int matriz[5][5];

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            num = num + 1;
            matriz[i][j] = num;
        }
    }

    cout << "Matriz original" << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cout << " " << matriz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

    cout << "Matriz rotada 90 grados" << endl;
    for(int i = 0; i < 5; i++) {
        for(int j = 5; j > 0; j--) {
            cout << " " << matriz[j-1][i] << " ";
        }
        cout << endl;
    }
    return 0;
}
