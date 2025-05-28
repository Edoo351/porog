#include <iostream>
using namespace std;

int main() {
    int size;
    cin >> size;

    if (size < 3) {
        return 1;
    }
    int array[size];
    for (int i = 0; i < size; i++) {
        cin >> array[i];
    }
    for (int i = 0; i < size - 2; i++) {
        if (array[i] < array[i + 1] || array[i] < array[i + 2]) {
            cout << array[i] << " ";
        }
    }

    return 0;
}
