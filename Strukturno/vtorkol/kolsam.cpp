#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;

    // Declaration of a 2D array to store the matrix
    int matrix[100][100];

    // Input for the elements of the matrix
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int colum = 0;
    int colum_i_end = m - 2;
    int row = n - 1;
    int colum_j_start = 0;

    // Loop to print the matrix in a specific pattern
    while (row >= 0 && colum < m)
    {
        for (int i = 0; i <= colum_i_end; i++)
        {
            cout << matrix[i][colum] << " ";
        }

        ++colum;
        colum_i_end--;

        for (int j = colum_j_start; j <= row; j++)
        {
            cout << matrix[j][colum] << " ";
        }

        row--;
        cout << endl;
    }

    return 0;
}
