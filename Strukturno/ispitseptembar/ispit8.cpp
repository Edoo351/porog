#include <iostream>
using namespace std;
int main()
{
    int matrix[120][120];
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int j = 0; j < n; j++)
    {
        int brojac = 0;
        for (int i = 0; i < m; i++)
        {
            int index = j * 100 + i;
            if (matrix[i][j] == index)
            {
                brojac++;
            }
        }
        cout << brojac << endl;
    }


    return 0;
}
