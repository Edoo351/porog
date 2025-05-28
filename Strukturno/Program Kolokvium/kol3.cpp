//Благ број е број што е составен само од парни цифри (0, 2, 4, 6, 8).
 //Во зададен опсег (почетокот m и крајот на опегот n се цели броеви чија вредност се внесува од тастатура)
// да се најде и испечати најмалиот „благ број“. Ако не постои таков број, да се испечати NE.
#include <iostream>
using namespace std;
int main(){
    int m,n;
    bool isMild;
   int Mildnumber=-1;
    cin>>m>>n;
    for (int i = m; i <= n; i++)
    {
        int number=i;
        isMild=true;
        while (number>0)
        {
           int digit=number %10;
           if (number %2!=0)
           {
            isMild=false;
            break;
           }
           number /=10;
        }
        if (isMild || i<Mildnumber)
        {
            Mildnumber=i;
            break;
        }
      
      
    }
        if (Mildnumber != -1)
        {
            cout<<Mildnumber<<endl;

        }
        else{
            cout<<"Ne"<<endl;
        }
    
    return 0;
}
