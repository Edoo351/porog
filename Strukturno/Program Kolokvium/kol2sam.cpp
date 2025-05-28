/*Eден природен e „интересен“ ако неговиот обратен број е делив со неговиот број на цифри. 
Обратен број е бројот составен од истите цифри, но во обратен редослед 
(на пример, 653 е обратен број на бројот 356). Од тастатура се внесува природен број n ( n > 9). 
Да се најде и отпечати најголемиот природен број помал од n кој што е „интересен“. 
Ако внесениот број не е валиден, да се отпечати соодветна порака (Brojot ne e validen).

*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if (n<=9)
    {
        cout<<"Brojot ne e validen"<<endl;
        return 0;
    }
    
   for (int i = n-1; i > 8; i--)
   {
    int digits=0;
    int reversedNum=0;
    int tmp=i;
    while (tmp>0)
    {
        reversedNum = reversedNum*10 + tmp %10;
        tmp /=10;  
        digits++;
    }
    if (reversedNum % digits == 0)
    {
        cout<<i;
        return 0;
    }
   }
   
    return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if (n<10)
    {
        cout<<"The number is invalid"<<endl;
        return 0;
    }
    
    for (int i = n-1; i > 8; i--)
    {   
        int digits=0;
        int reversedNum=0;
        int tmp=i;
        while (tmp>0)
        {
           reversedNum= reversedNum *10 +tmp %10;
           tmp /= 10;
           digits++;
        }
        if (reversedNum % digits == 0){
            cout << i;
            return 0;
        }
         

    }

    
    return 0;
}*/