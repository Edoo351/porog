#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    double matrix[n][n];
    double matrixb[100][100] = {0.0};
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    double diagonal=0;
    double antidiagonal=0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i>j)
            {
                diagonal+=matrix[i][j];
            }
             if ((i+j)>=n)
            {
                antidiagonal+=matrix[i][j];
            }
            // else{
            //     matrixb[i][j]=matrix[i][j];
            // }
        }

    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i==j)
            {
                matrixb[i][j]=diagonal;
            }
            else if (i+j==n-1)
            {
                matrixb[i][j]=antidiagonal;
            }
            if((i==j)&&(i+j)==n-1)
            matrixb[i][j]=diagonal+antidiagonal;
        }

    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrixb[i][j]<<" ";
        }
        cout<<endl;
    }

}
