#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main(){
    char text [50];
    char filter [50];
    int max=0;
    while (cin.getline(text,50))
    {
        int len=strlen(text);
        if (len>=4)
        {
            int uniqeLeters=0;
            bool used[26]={false};
            for (int i = 0; i < len; i++)
            {
                if (isalpha(text[i]))
                {
                    int index=tolower(text[i])-'a';
                    if (!used[index])
                    {
                        uniqeLeters++;
                        used[index]=true;
                    }
                    else if (used[index])
                    {
                        continue;
                    }

                }

            }
            if (uniqeLeters>max)
            {
                max=uniqeLeters;
                strcpy(filter,text);
            }

        }

    }

    cout<<filter<<endl;
    return 0;
}
