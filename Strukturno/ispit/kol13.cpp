#include<iostream>
#include<climits>
using namespace std;
int main(){
    int N;
    cin>>N;
    int matrix[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>matrix[i][j];
        }
    }
        int minDiagonal=INT_MAX;
    for (int i = 1; i < N; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (matrix[i][j]<minDiagonal)
            {
               minDiagonal=matrix[i][j];
            }
        }
    }
   int maxDiagonal=INT_MIN;
     for (int i = 0; i < N; i++)
    {
        for (int j = i+1; j < N; j++)
        {
            if (matrix[i][j]>maxDiagonal)
            {
               maxDiagonal=matrix[i][j];
            }
        }
    }
     for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
       if (i<j)
       {
        matrix[i][j]=maxDiagonal;
       }
       else if (i>j){
        matrix[i][j]=minDiagonal;
       }
        }
    }
     for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
    cout<<endl;
    }

    return 0;
}