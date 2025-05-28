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
        for (int j = 0; j < n; j++)
        {
            int s1 = 0;
            int s2 = 0;
            for (int k = j; k < n; k++)
            {
                s1 += matrix[i][k];
            }
            for (int k = i; k < m; k++)
            {
                s2 += matrix[k][j];
            }
            matrix[i][j]=(s1>s2 ? s1:s2);
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
