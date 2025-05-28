#include <iostream>
using namespace std;
int main()
{
    int matrix[100][100];
    int matrixb[100][100];
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            matrixb[i][j] = matrix[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = i + 1; j < m; j++)
        {
            sum += matrix[i][j];
        }
        for (int k = 0; k < m; k++)
        {
            sum += matrix[k][i];
        }
        matrixb [i][i] = sum;
    }

    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        for (int j = 0; j < m - 1 - i; j++)
        {
            sum += matrix[i][j];
        }
        for (int k = i + 1; k < m; k++)
        {
            sum += matrix[k][m - 1 - i];
        }
        if (i == m - 1 - i)
        {
            matrixb[i][m - 1 - i] += sum;
        }
        else
        {
            matrixb[i][m - 1 - i] = sum;
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrixb[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
