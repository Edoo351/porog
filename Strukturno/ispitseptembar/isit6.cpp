#include <iostream>
using namespace std;

void treansformArray(int arr[], int n)
{
    int first = arr[0];
    int arr1[100] = {0};
    if (first > 0)
    {
        for (int i = 0; i < n; i++)
        {
            if (first + i < n)
            {
                arr1[i + first] = arr[i];
            }
        }
    }
    else if (first < 0)
    {
        int shift = -first;
        for (int i = 0; i < n; i++)
        {
            if (i >= shift)
            {
                arr1[i - shift] = arr[i];
            }
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            arr1[i] = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        arr[i] = arr1[i];
    }
}

int main()
{
    int m;
    cin >> m;
    int brojac = 0;
    for (int i = 0; i < m; i++)
    {
        int arr[50];
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        bool empty = true;
        treansformArray(arr, n);
        for (int j = 0; j < n; j++)
        {
            cout << arr[j] << " ";
            if (arr[j] != 0)
            {
                empty = false;
            }
        }
        cout << endl;
        if (empty)
        {
            brojac++;
        }
    }
    cout << brojac << endl;
    return 0;
}
