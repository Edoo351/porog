#include<iostream>
#include<cctype>
#include<cstring>
using namespace std;
int main(){
    char inputText[20];
    char filter[20];
   int  max=0;
   while (cin.getline(inputText,20))
   {
    int len=strlen(inputText);
    if (len>=4)
    {
        int uniqeletters=0;
        bool used[26]={false};
        for (int i = 0; i < len; i++)
        {
            if (isalpha(inputText[i]))
            {
                int index=tolower(inputText[i])-'a';
                if (!used[index])
                {
                    used[index]=true;
                    uniqeletters++;
                }
                 else if (used[index])
                    {
                        break;
                    }
            }

        }
        if (uniqeletters>max)
        {
          max=uniqeletters;
          strcpy(filter,inputText);
        }

    }

   }
   cout<<filter;
    return 0;
}
