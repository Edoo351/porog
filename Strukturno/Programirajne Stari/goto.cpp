  #include <iostream>
    using namespace std;

    int main() {
        int n, max;
        if (cin >> max) {
            while (cin >> n) {
                if (n > 100) continue;
                if (max < n) {
                    max = n;
                }
            }
            cout << max;
        } else {
            cout << "No number was entered.";
        }
        return 0;
    }