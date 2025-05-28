#include<iostream>
#include<cstring>
#include<cctype>
using namespace std;

int main() {
    int n = 0, x = 0;
    cin >> n >> x;
    cin.ignore(); // Ignore the newline character to correctly read the first string

    for (int i = 0; i < n; i++) {
        char inputText[80];
        cin.getline(inputText, 80);

        for (int j = 0; j < strlen(inputText); j++) {
            if (isalpha(inputText[j])) {
                char base = isupper(inputText[j]) ? 'A' : 'a'; // Determine the base for uppercase or lowercase
                int alphabetSize = 26; // Size of the alphabet
                // Calculate the shifted character, ensuring it wraps around the alphabet
                char shiftedChar = (inputText[j] - base + x) % alphabetSize + base;
                cout << shiftedChar;
            } else {
                // Non-alphabetic characters are printed as-is
                cout << inputText[j];
            }
        }
        cout << endl; // Move to the next line after processing each string
    }
    return 0;
}
