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
        int brojac = 0;
        for (int j = 0; j < n; j++)
        {
            if ((matrix[i][j]%2)==((i+j)%2))
            {
                brojac++;
            }
        }
        cout<<i<<" : "<<brojac<<endl;
    }

    return 0;
}
