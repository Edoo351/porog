#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

using namespace std;

int main() {
    char inputText[80];
    while (cin.getline(inputText, 80)) {
        int sum = 0;
        int count = 0;
        int n = strlen(inputText);

        for(int i = 0; i <= n; i++) {
            if(isdigit(inputText[i])) {
                count++;
            } else {
                if(count != 0) {
                    char digit[count+1];
                    int k = 0;
                    for(int j = i - count; j < i; j++) {
                        digit[k] = inputText[j];
                        k++;
                    }
                    digit[count] = '\0';
                    sum += stoi(digit);
                    count = 0;
                }
                if(isalpha(inputText[i])) {
                    cout << inputText[i];
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}
