#include<iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int matrix[N][N];

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }
    int broajc=0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i==j&&j!=0)
            {
                broajc++;
            }
            else if ((i+j)>=N&&j!=0)
            {
                broajc++;
            }
            

        }
    }
    cout<<broajc<<endl;
    return 0;
}
