#include<iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    int martix[N][N];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin>>martix[N][N];
        }
        
    }
    int zDiagonal[N];
    int zDiagonalIndex=0;
    for (int j = N-1 ; j >=0 ; j++)
    {
        zDiagonal[zDiagonalIndex++]=martix[N-1][j];
    }
    
     for (int i = 0; i < zDiagonalIndex; i++) {
        cout << zDiagonal[i] << " ";
    }
    
    return 0;
}