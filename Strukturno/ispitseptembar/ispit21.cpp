#include <iostream>
using namespace std;
int main()
{
    int matrix[100][100];
    int matrix1[100][100];
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
            matrix1[i][j] = 0;
            if (i - 1 >= 0 && matrix[i - 1][j] > 0)
            {
                matrix1[i][j] += matrix[i - 1][j];
            }
            if (i + 1 >= 0 && matrix[i + 1][j] > 0)
            {
                matrix1[i][j] += matrix[i + 1][j];
            }
            if (j - 1 >= 0 && matrix[i][j - 1] > 0)
            {
                matrix1[i][j] += matrix[i][j - 1];
            }
            if (j + 1 >= 0 && matrix[i][j + 1] > 0)
            {
                matrix1[i][j] += matrix[i][j + 1];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix1[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
