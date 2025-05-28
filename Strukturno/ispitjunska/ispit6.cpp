#include<iostream>
using namespace std;
int main(){
    int matrix[100][100];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m ;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
    }
    int m1,n1;
    cin>>m1>>n1;

    if (matrix[m1][n1]==0)
    {
        matrix[m1][n1]=1;
    }


    for (int i = m1-1; i >=0; i--)
    {
            if (matrix[i][n1]==1)
            {
                break;
            }
        matrix[i][n1]=1;
    }
      for (int i = m1+1; i <m; i++)
    {
            if (matrix[i][n1]==1)
            {
                break;
            }
        matrix[i][n1]=1;
    }
      for (int i = n1-1; i >=0; i--)
    {
            if (matrix[m1][i]==1)
            {
                break;
            }
        matrix[m1][i]=1;
    }
      for (int i = n1+1; i <n; i++)
    {
            if (matrix[m1][i]==1)
            {
                break;
            }
        matrix[m1][i]=1;
    }
   for (int i = 0; i < m ;i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
