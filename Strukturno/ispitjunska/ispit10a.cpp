#include <iostream>
using namespace std;
int main()
{
    int matrix[100][100];
    int matrixb[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrixb[i][j] = 0;
            if (i - 1 >= 0 && matrix[i - 1][j] > 0)
            {
                matrixb[i][j] += matrix[i - 1][j];
            }
            if (i + 1 >= 0 && matrix[i + 1][j] > 0)
            {
                matrixb[i][j] += matrix[i + 1][j];
            }
            if (j + 1 >= 0 && matrix[i][j + 1] > 0)
            {
                matrixb[i][j] += matrix[i][j + 1];
            }
            if (j - 1 >= 0 && matrix[i][j - 1] > 0)
            {
                matrixb[i][j] += matrix[i][j - 1];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrixb[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
