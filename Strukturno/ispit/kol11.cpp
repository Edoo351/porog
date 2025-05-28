#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main() {
    char string[100];
    cin.getline(string, 100);
    char firstnumber='\0';
    char secondnumber='\0';
    bool stopPrinting=false;
    for (int i = 0; string[i] != '\0' && !stopPrinting; i++) {
        if (isdigit(string[i])) {
            if (firstnumber=='\0')
            {
                firstnumber=string[i];
            }else if (secondnumber=='\0'&&firstnumber!='\0')
            {
                secondnumber=string[i];
            }

        }
          if (firstnumber!='\0')
           {
            cout<<string[i];
           }
            if (secondnumber!='\0'&&string[i]==secondnumber)
            {
                stopPrinting=true;
            }

    }
    if (firstnumber=='\0')
    {
       cout<<"No digits";
    }

    return 0;
}
