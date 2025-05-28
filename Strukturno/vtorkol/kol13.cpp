#include<iostream>


using namespace std;


int main() {
    int x;
    int matrix[100][100];
    cin>>x;
    int m, n; //m=row, n=column
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
       int sum=0;
        for (int j = 0; j < n; j++) {
           sum=sum+matrix[i][j];
        }
        for (int j = 0; j < n; j++)
        {
          if (sum < x) {
                matrix[i][j] = -1;
            } else if (sum > x) {
                matrix[i][j] = 1;
            } else { 
                matrix[i][j] = 0;
             }
        }
        
    }

    
         for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
           
           cout<<matrix[i][j]<<" ";
        
         }
         cout<<endl;
         }   
    return 0;
}
