#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int points=0 , max=0;
        cin>>points>>max;
        float precentage = static_cast<float>(points) / max *100;
        //float precentage static_cast<float>(points) / max *100;
        string grade;
        if (precentage>=90)
        {
            grade="9";

        }
        else if (precentage>=80)
        {
            grade="8";

        }
     else if (precentage>=70)
        {
            grade="7";

        }
        else if (precentage>=60)
        {
            grade="6";

        }
        else{
            grade="FAIL";
        }
    
   cout<<i<<precentage<<grade<<endl;
   
   
    }
    
    return 0;
}

/*#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; ++i)
    {
        int points,maxpoints;
        cin>>points>>maxpoints;
        float precentage = static_cast<float>(points) / maxpoints *100;
        string grade;
        if (precentage >= 90) {
            grade = "10";
        } else if (precentage >= 80) {
            grade = "9";
        } else if (precentage >= 70) {
            grade = "8";
        } else if (precentage >= 60) {
            grade = "7";
        } else if (precentage >= 50) {
            grade = "6";
        } else {
            grade = "FAIL";
        }
    cout<<i<<precentage<<grade<<endl;
    }
    
    return 0;
}*/