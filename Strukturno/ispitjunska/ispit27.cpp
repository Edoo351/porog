#include <iostream>
#include <climits>
using namespace std;
int main(){
    int matrix [100][100];
    int m,n;
    cin>>m>>n;
    for (int i = 0; i < m; i++)
    {
       for (int j = 0; j < n; j++)
       {
        cin>>matrix[i][j];
       }
    }
    int maxSum=INT_MAX;
    int maxColum=-1;
        for (int j = 0; j < n; j++)
        {
           int columSum=0;
           for (int i = 0; i < m; i++)
           {
            columSum+=matrix[i][j];
           }
            if (maxSum>columSum)
            {
                maxSum=columSum;
                maxColum=j;
            }
        }

        cout<<maxColum<<endl;

    return 0;
}
