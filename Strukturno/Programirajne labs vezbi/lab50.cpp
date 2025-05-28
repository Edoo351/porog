#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    int sumpopust=0;
    for (int i = 0; i < n; i++)
    {
        int b;
        cin>>b;
        sumpopust+=b;
        char p;
        cin>>p;
        if (p=='B')
        {
            sum+=b*0.5;
        }
        else if (p=='A')
        {
            sum+=b*0.8;
        }
        else if (p=='C')
        {
            sum+=b*0.3;
        }
        else{
            sum+=b;
        }
    }
    cout<<sum<<endl;
    int razlika=sum-sumpopust;
    razlika=razlika*-1;
    cout<<razlika;
    return 0;
}