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
    for (int k = 2; k <=n; k++)
    {
        for (int i = 0; i < k; i++)
        {
            for (int j = 0; j < k; j++)
            {
                if (j == 0 || j == k - 1 || i == j)
                {
                    cout << matrix[i][j] << " ";
                }
            }
            cout << endl;
        }
    }


    return 0;
}
