#include <iostream>
#include <cmath>
using namespace std;

const int MAX_SIZE = 100;

void transformMatrix(int matrix[MAX_SIZE][MAX_SIZE], int m, int n, int j) {
    int sum1 = 0;
    for (int i = 0; i <= m / 2; i++) {
        sum1 += matrix[i][j];
    }
    int sum2 = 0;
    for (int i = m; i >= m/2; i--) {
        sum2 += matrix[i][j];
    }
        int middle=m;
    if (middle % 2 == 0) {
         int middle = m / 2;
        int middle1 = middle - 1;
        matrix[middle][j] = abs(sum2 - sum1);
        matrix[middle1][j] = abs(sum2 - sum1);
    } else {
         int middle = m / 2;
        matrix[middle][j] = abs(sum2 - sum1);
    }
}

int main() {
    int m, n;
    cin >> m >> n;
    int matrix[MAX_SIZE][MAX_SIZE];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    for (int j = 0; j < n; j++) {
        transformMatrix(matrix, m, n, j);
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
