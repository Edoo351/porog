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
    for (int i = 0; i < m; i++)
    {
        int sum = 0;
        int sum1 = 0;
        for (int j = 0; j < n / 2; j++)
        {
            sum += matrix[i][j];
        }
        for (int j = (n + 1) / 2; j < n; j++)
        {
            sum1 += matrix[i][j];
        }
        int middle = abs(sum - sum1);
        if (n % 2 == 0)
        {
            matrix[i][n / 2 - 1] = middle;
            matrix[i][n / 2] = middle;
        }
        else
        {
            matrix[i][n / 2] = middle;
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
