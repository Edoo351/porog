#include <iostream>
using namespace std;

bool check(int arr)
{
    int last = arr % 10;
    int first = arr;
    while (first > 9)
    {
        first /= 10;
    }
    return (first % 2 != 0) && (last % 2 == 0);
}

int main()
{
    int arr[100];
    int n;
    bool found = false;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (check(arr[i]))
        {
            cout << arr[i] << " " << endl;
            found = true;
        }
    }
    if (!found)
    {
        cout << "No such elements!" << endl;
    }
}
