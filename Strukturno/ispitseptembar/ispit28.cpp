#include <iostream>
using namespace std;

int small(int arr, int k)
{
    int max = 0;
    int multiplaer = 1;
    while (arr > 0)
    {
        int digit = arr % 10;
        if (digit > k)
        {
            max += multiplaer * digit;
            multiplaer *= 10;
        }
        arr /= 10;
    }
    return max;
}

int findMaxarr(int arr[], int n, int k)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        int findsmall = small(arr[i], k);
        if (findsmall > max)
        {
            max = findsmall;
        }
    }

    return max;
}

int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int maxarr = findMaxarr(arr, n, k);
    cout << maxarr;
    return 0;
}
