#include <iostream>
using namespace std;

int main(){

     int R;
     int H;
    
     cout << "insert the number of robins direct followers" << endl;

     cin >> R;

     int RobinFollowers[10];

     for (int i = 0; i < R; i++) {
         cin >> RobinFollowers[i];
     }
         int sum = R;
         for (int i = 0; i < R; i++){
         cout<< RobinFollowers[i]<<endl;
     }

         for ( int i = 0; i < R; i++){
         sum+=RobinFollowers[i];
         }
         cout << "Robin has "<<sum<<" likes";
         cout<<"how many hours you want to know"<<endl;
         while (H>=H)
         {
              cin>>H;
            RobinFollowers{i} = RobinFollowers * H ;
            cout<<RobinFollowers{i}<<endl;
         }
         
         


     return 0;
 }
   