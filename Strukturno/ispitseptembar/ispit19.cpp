#include <climits>
#include <iostream>
using namespace std;
int main()
{
    int martrix[100][100];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < j; j++)
        {
            cin >> martrix[i][j];
        }
    }
    int sum = 0;
    int sum1 = 0;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < m / 2 + m % 2; i++)
        {
            sum += martrix[i][j];
        }
        for (int i = m / 2; i < m; i++)
        {
            sum1 += martrix[i][j];
        }
        int middle = m / 2;
        martrix[middle][j] = abs(sum - sum1);
        if (middle % 2 == 0)
        {
            martrix[middle - 1][j] = abs(sum - sum1);
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << martrix[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}
