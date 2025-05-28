#include <iostream>
using namespace std;

void premesti(int arr[], int n)
{
    int positiv[n];
    int negativ[n];
    int poscount = 0, negcount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= 0)
        {
            positiv[poscount++] = arr[i];
        }
        else
        {
            negativ[negcount++] = arr[i];
        }
    }
    for (int i = 0; i < poscount; i++)
    {
        arr[i] = positiv[i];
    }
    for (int i = 0; i < negcount; i++)
    {
        arr[poscount + i] = negativ[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    premesti(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
