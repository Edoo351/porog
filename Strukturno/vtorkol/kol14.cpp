#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[50][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            cin>>arr[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = n; j < 2 * n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
