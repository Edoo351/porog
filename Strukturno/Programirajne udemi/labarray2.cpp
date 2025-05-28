#include<iostream>
using namespace std;
int main(){
    
    int array[100];
    int size=0;
    cin>>size;
    
    for (int i = 0; i < size; i++)
    {
       cin >> array[i];
    }
    int max=INT_MIN;
    int currentSum=0;
    int start=0;
    int end=0;
   for (int i = 0; i < size; i++)
    {
      currentSum=currentSum+array[i];

      if (currentSum<0)
      {
       currentSum=0;
       start=i+1;
      }
      if (currentSum>max)
      {
       max=currentSum;
        end=i;
      }
      
    }
    
    cout<<"The max is : "<<max<<endl;
    
    double precentage =( end-start + 1 )*100/size;

    cout<<"Precentage is ; "<<precentage<<endl;
   
    return 0;
}