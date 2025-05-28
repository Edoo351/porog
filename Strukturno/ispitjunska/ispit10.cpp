#include <iostream>
using namespace std;


int main()
{
    int k[100][100];
    int b[100][100];
    int m, n;
    cin >> m >> n;

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> k[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            b[i][j] = 0;
            if (i == 0 && j == 0)
            {
                if (k[i + 1][j] > 0)
                {
                    b[i][j] += k[i + 1][j]
                }
                if (k[i][j + 1] > 0)
                {
                    b[i][j] += l[i][j + 1];
                }
            }
            else if (i == m - 1 && j == n - 1)
            {
                if (k[i - 1][j] > 0)
                {
                    b[i][j] += k[i - 1][j];
                }
                if (k[i][j - 1])
                {
                    b[i][j] += k[i][j - 1];
                }
            }
            else if (i == m - 1 && j == 0)
            {
                if (k[i - 1][j] > 0)
                {
                    b[i][j] += k[i - 1][j];
                }
                if (k[i][j + 1] > 0)
                {
                    b[i][j] += k[i][j + 1];
                }
            }
            else if (i == 0 && j == n - 1)
            {
                if (k[i - 1][j] > 0)
                {
                    b[i][j] += k[i - 1][j];
                }
                if (k[i][j + 1] > 0)
                {
                    b[i][j] += k[i][j + 1];
                }
            }
            else if (i == m - 1)
            {
                if (k[i - 1][j] > 0)
                {
                    b[i][j] += k[i - 1][j];
                }
                if (k[i + 1][j] > 0)
                {
                    b[i][j] += k[i + 1][j];
                }
                if (k[i][j + 1])
                {
                    b[i][j] += k[i][j + 1];
                }
            }
            else if (i == 0)
            {
            }
        }
    }

    for (int i = 1; i < m - 1; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if (k[i + 1][j] >= 0)
                b[i][j] += k[i + 1][j];

            if (k[i][j + 1] >= 0)
                b[i][j] += k[i][j + 1];

            if (k[i - 1][j] >= 0)
                b[i][j] += k[i - 1][j];

            if (k[i][j - 1] >= 0)
                b[i][j] += k[i][j - 1];
        }
    }


    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
