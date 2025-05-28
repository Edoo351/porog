#include <climits>
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int minDiagonal = INT_MAX;
    int maxDiagonal = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j] < minDiagonal)
            {
                minDiagonal = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] > maxDiagonal)
            {
                maxDiagonal = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                matrix[i][j] = minDiagonal;
            }
            else if (i < j)
            {
                matrix[i][j] = maxDiagonal;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
