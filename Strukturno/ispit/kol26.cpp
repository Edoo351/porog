#include<iostream>
using namespace std;
int main(){
    int matrix[100][100];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           cin>>matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (matrix[i][j] < matrix[i][j + 1] && matrix[i][j] != matrix[i][j + 1]&&matrix[i][j] != matrix[i][j + 2])   
           {
            cout<<matrix[i][j]<<" ";
           }
          
        }
    }
    return 0;
}