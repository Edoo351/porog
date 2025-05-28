#include <iostream>
using namespace std;

int maxNumber(int n, int max)
{
    if (n == 0)
    {
        return max;
    }
    else
    {
        int tmp = n % 10;
        if (tmp > max)
        {
            max = tmp;
        }
    }
    return maxNumber(n / 10, max);
}

int main()
{

    int n;

    while (cin >> n)
    {
        int max = 0;
        max = maxNumber(n, max);
        cout << max << endl;
    }

    return 0;
}
