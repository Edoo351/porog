#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char find[100];
    char inputText[1000];
    int arr[10] = {0};
    cin.ignore();
    cin.getline(find, 100);
    for (int i = 0; i < n; i++)
    {
        cin.getline(inputText, 1000);
        int findLen=strlen(find);
        int inputLen=strlen(inputText);
        for (int j = 0; j <= inputLen - findLen; j++)
        {
             if (strncmp(&inputText[j], find , findLen  )== 0)
        {
            arr[i]++;
        }
        }

    }

    for (int i = 0; i < n; i++)
    {
        cout << i << ":" << arr[i] << endl;
    }

    return 0;
}
