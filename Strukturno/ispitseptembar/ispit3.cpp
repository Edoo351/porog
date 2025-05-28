#include <iostream>
using namespace std;
int main()
{

    int m, n;
    cin >> m >> n;
    int r, k;
    cin >> r >> k;
    int matrix[1000][1000];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    //find the smallest
    int smallest=9999999;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j]<smallest)
            {
                smallest=matrix[i][j];
            }

        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
           matrix[i][j]=smallest;

        }
    }
     for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < k; j++)
        {
           cout<<matrix[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<endl;
    cout<<smallest;
    return 0;
}
