    #include <iostream>
    using namespace std ;
    int countDigit(int number,int digit ){
        if (number==0)
        {
            return 0;
        }
        else{
            return (number%10==digit) + countDigit(number/10,digit);
        }
    }

    int main (){
        int s;
        cin>>s;
        int array[10];
        int lastDigit=0;
        for (int i = 0; i < s; i++)
        {
            cin>>array[i];
        }
        for (int i = 0; i < s; i++)
        {
        lastDigit=array[i]%10;
        array[i]=countDigit(array [i],lastDigit);
        }
        for (int i = 0; i < s; i++)
        {
            cout<<array[i]<< " ";
        }
        
        
        return 0;
    }