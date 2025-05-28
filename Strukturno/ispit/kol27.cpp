#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int matrix[100][100];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>matrix[i][j];
        }
        
    }
    int minColumMatrix=INT_MAX;
    int minColumIndex=-1;
    for (int j = 0; j < n; j++)
    {
        int columSum=0;
        for (int i = 0; i < m; i++)
        {
            columSum+=matrix[i][j];
        }
        if (minColumMatrix>columSum)
        {
            minColumMatrix=columSum;
            minColumIndex=j;
        }
        
    }
    cout<<minColumIndex<<endl;
    return 0;
}