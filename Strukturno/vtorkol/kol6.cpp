#include <iostream>
using namespace std ;
int main ()
{
    int matrix[100][100];
    int m, n; 
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
   int brojac=0;
    for (int i = 0; i < m; i++) {
        int tmpbrojac=0;
        for (int j = 0; j < n; j++) {
            if (matrix[i][j]==1)
            {
                tmpbrojac++;
                if (tmpbrojac>=3)
                {
                    brojac++;
                    break;
                }
                
            }
            else{
                tmpbrojac=0;
            }
        }
    }
    
    for (int j = 0; j < n; j++) {
        int tmpbrojac=0;
        for (int i = 0; i < m; i++) {
            if (matrix[i][j]==1)
            {
                tmpbrojac++;
                if (tmpbrojac>=3)
                {
                    brojac++;
                    break;
                }
                
            }
            else{
                tmpbrojac=0;
            }
        }
    }
    cout<<counter<<endl;
    return 0;
}