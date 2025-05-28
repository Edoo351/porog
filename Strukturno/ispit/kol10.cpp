#include <iostream>
#include <cstring>
using namespace std;

void print (char * line,int a,int b){
    for (int i = 0; i < strlen(line); i++)
    {
        if ()
        {
            /* code */
        }
        
    }
    

}
int main(){
    
    int a,b;
    cin>>a>>b;
    char line [80];
    while (cin.getline(line,80))
    {
        if (line[0]=='#')
        {
            break;
        }
        print(line,a,b);
        cout<<line<<endl;
    }
    
    return 0;
}