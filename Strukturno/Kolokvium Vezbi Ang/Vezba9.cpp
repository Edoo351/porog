#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
    int a, b, c;

    while (cin >> a >> b >> c) {
        int diff1 = abs(a - b);
        int diff2 = abs(b - c);
        int diff3 = abs(a - c);

        int minDiff = min({diff1, diff2, diff3});

        if (diff1 == diff2 || diff2 == diff3 || diff1 == diff3) {
            // Handle equal differences
            int sortedArray[3] = {a, b, c};
            sort(sortedArray, sortedArray + 3);

            cout << sortedArray[0] << " " << sortedArray[1] << " " << sortedArray[2] << endl;
        } else if (minDiff == diff1) {
            cout << min(a, b) << " " << max(a, b) << endl;
        } else if (minDiff == diff2) {
            cout << min(b, c) << " " << max(b, c) << endl;
        } else {
            cout << min(a, c) << " " << max(a, c) << endl;
        }
    }

    return 0;
}
