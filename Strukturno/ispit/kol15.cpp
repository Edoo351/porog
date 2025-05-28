#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char text[81];
    char filter[81];
    while(cin.getline(text, 80)){

    int j = 0;

    for (int i = 0; i < strlen(text); i++) {
         if (isalpha(text[i]))
        {
           filter[j] = text[i];
            j++;
        }
        if(isspace(text[i]))
        {
            if (j > 0 && !isspace(filter[j - 1])){
                filter[j] = text[i];
            j++;}
        }

    }

    filter[j] = '\0';
    for (int i = 0; i < strlen(filter); i++)
    {
       cout << filter[i];
       if (isspace(filter[i]))
       {
        cout<<endl;
       }

    }
    cout<<endl;
    }

    return 0;
}
