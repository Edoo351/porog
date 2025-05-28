#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int n;
    cin>>n;
    double arr[n][n];

    double temp[n][n];

    double z[100];
    int count = 0;

    int arrLen = n - 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >>arr[i][j];
        }
    }
    

    for (int i = 0; i < n; i++)
    {
       for (int j = 0; j < n; j++)
       {
        if(i == 0 || i == arrLen || i + j == arrLen) {
            z[count] = arr[i][j];
            count++;
            cout<<arr[i][j]<<" ";
        }
        if(i == arrLen) {
            temp[(arrLen) - i][(arrLen) - j] = arr[i][j];
        } else if(i == 0) {
            temp[(i - arrLen) * -1][(j - arrLen) * -1] = arr[i][j];
        } else if(i + j == arrLen) {
            temp[j][i] = arr[i][j];
        } else {
            temp[i][j] = arr[i][j];
        }
       }
       
    }
    cout<<endl;
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<temp[i][j]<<" ";
        }
        cout<<endl;
    }
    
}