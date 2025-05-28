#include <iostream>
#include <cstring>
using namespace std;
bool vovel(char c)
{
    c = tolower (c);
    return c == 'a'|| c=='i' || c== 'e' || c == 'o' || c=='u';
}

void clean(char * line){
 for (int i = 0; i < strlen(line); i++)
 {
    if (vovel(line[i]))
    {
        for (int j = i; j < strlen(line); j++)
        {
            line[j]=line[j+1];
        }
        i--;
    }
    
 }
 
}

int main(){
    
    char line [100];

    while (cin.getline(line,100))
    {
        if (line[0]=='#')
        {
            break;
        }
        clean(line);
        cout<<line;
    }
    
    return 0;
}