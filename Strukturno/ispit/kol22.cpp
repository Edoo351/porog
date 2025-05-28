#include <iostream>
using namespace std;
void printline(int currentLine){
if (currentLine==0)
{
    return;
}
else{
printline(currentLine-1);
cout<<currentLine;
}
}


void triangle(int n,int currentLine=1)
{
    if (n<currentLine)
    {
        return;
    }
    else{
        printline(currentLine);
        cout<<endl;
        triangle(n,currentLine+1);
    }
}
int main(){
    int n;
    cin>>n;
triangle(n);
    return 0;
}
