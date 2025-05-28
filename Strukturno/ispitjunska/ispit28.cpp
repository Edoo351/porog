#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main(){
    char text[80];
    while (cin.getline(text,80))
    {
        int sum=0;
        int count=0;
        int n = strlen(text);
        for (int i = 0; i <=n; i++)
        {
            if (isdigit(text[i]))
            {
                count++;
            }
            else{
                if (count!=0)
                {
                    int digit=0;
                    int k=0;
                    for (int j = i-count; j <i ; j++)
                    {
                        digit=digit *10+text[j]-'0';
                        k++;
                    }
                    sum+=digit;
                    count=0;
                }
                if (isalpha(text[i]))
                {
                    cout<<text[i];
                }

            }
        }

        cout<<sum<<endl;
    }

    return 0;
}
