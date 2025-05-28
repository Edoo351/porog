#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;
int main(){
    char inputText[200];
    int total=0;
    while (cin.getline(inputText,200))
    {
        const int len = strlen(inputText);
        for (int i = 0; i < len; i++)
        {
           if (inputText[i]=='#')
           {
            break;
           }
            char lower=tolower(inputText[i]);
            if (lower=='a'||lower=='e'||lower=='i'||lower=='o'||lower=='u')
            {
                char lower1=tolower(inputText[i+1]);
                if (lower1=='a'||lower1=='e'||lower1=='i'||lower1=='o'||lower1=='u')
                {
                   cout<<lower<<lower1<<endl;
                   total++;
                }

            }

        }

    }
cout<<total;
    return 0;
}
