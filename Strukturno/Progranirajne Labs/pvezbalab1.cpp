#include <iostream>
using namespace std;
int main(){
    int n, ordinal_num, passed_rate;
    cin >> n;
    float absolute_avg(-1);
    for (int i = 0; i < n; i++){
        float m, p, sum(0);
        cin >> m;
        for (int j = 0; j < m; j++){
            float g;
            cin >> g;
            sum += g;
        }
        cin >> p;
        float realtive_avg = (sum/m)*(m/p)+(1 - m/p)*5;
        if (realtive_avg > absolute_avg){
            absolute_avg = realtive_avg;
            ordinal_num = i+1;
            passed_rate = (m / p)*100;
        }
    }
    cout << "semester 1: " << ordinal_num << endl << "grade avg: " << absolute_avg << ", precentage of passed: " << passed_rate;
}