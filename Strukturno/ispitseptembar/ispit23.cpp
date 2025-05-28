#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int matrix[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int maxdiagonal = INT_MAX;
    int minantidiagonal = INT_MIN;
    for (int i = 1; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (maxdiagonal < matrix[i][j])
            {
                maxdiagonal = matrix[i][j];
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if (maxdiagonal < matrix[i][j])
            {
                maxdiagonal = matrix[i][j];
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i > j)
            {
                matrix[i][j] = maxdiagonal;
            }
            if (i < j)
            {
                matrix[i][j] = minantidiagonal;
            }
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
