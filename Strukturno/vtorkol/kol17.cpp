#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    int matrix[100][100]; 
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        double gjysem = n / 2;
        if (n % 2 == 1) {
            gjysem++;
        }

        int gjysma1 = 0, gjusma2 = 0;

        for (int j = 0; j < gjysem; j++) {
            gjysma1 += matrix[i][j];
        }

        for (int j = gjysem; j < n; j++) {
            gjusma2 += matrix[i][j];
        }


        if (n % 2 == 1) {
           
            int absdis = abs(gjusma2- gjysma1);
            matrix[i][n / 2] = absdis;
        } else {
   
            int absdis = abs(gjysma1 - gjusma2);
            matrix[i][n / 2 - 1] = matrix[i][n / 2] = absdis;
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
