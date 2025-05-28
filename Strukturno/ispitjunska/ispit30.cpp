#include <iostream>
using namespace std;
int main()
{
    int arr[100];
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int a = 0;
    int b = 0;
    int max_counter = 0;
    int max_counter1 = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int counter = 0;
        for (int j = 0; j < n; j++)
        {
            if (temp == arr[j])
            {
                counter++;
            }
        }
        if (counter > max_counter)
        {
            max_counter = counter;
            a = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int counter = 0;
        for (int j = 0; j < n; j++)
        {
            if (temp == a)
            {

                continue;
            }
            if (temp == arr[j])
            {
                counter++;
            }

            if (counter > max_counter1)
            {
                max_counter1 = counter;
                b = temp;
            }
        }
    }

    if (b>a)
    {
        int tmp=a;
        a=b;
        b=tmp;
    }

      for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
           cout<<"*"<<" ";
        }
        cout<<endl;
    }
    return 0;
}
