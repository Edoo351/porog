#include <cmath>
#include <iostream>
#include <climits>
using namespace std;

int par(int arr[], int N)
{
    int arr1[100]={0} ;
    bool used[100]= {false} ;
    for (int i = 0; i < N; i++)
    {
        arr1[arr[i]]++;
    }
    int min = INT_MAX;
    bool found = false;
    for (int i = 0; i < N; i++)
    {

        if (arr1[arr[i]] % 2 == 0 && arr[i]< min)
        {
                min = arr1[i];
        }
        used[i] = true;
    }
    if (found)
    {
        return min;
    }
    else
    {
        cout << "Nitu eden element ne se pojavuva paren broj pati!";
        return 0;
    }
}

int main()
{
    int N;
    cin >> N;
    int arr[100];
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }
    int result = par(arr, N);
    if (result>0)
    {
         cout<<"Najmaliot element koj se pojavuva paren broj pati e "<<result<<endl;
    }

    return 0;
}
