#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter a text (string): ";
    string inputText;
    getline(cin, inputText);

    cout << "Enter a letter to search for: ";
    char searchLetter;
    cin >> searchLetter;

    size_t firstOccurrence = inputText.find(searchLetter);

    if (firstOccurrence != string::npos) {
        size_t secondOccurrence = inputText.find(searchLetter, firstOccurrence + 1);

        if (secondOccurrence != string::npos) {
            cout << "Substring: " << inputText.substr(firstOccurrence, secondOccurrence - firstOccurrence + 1) << endl;
        } else {
            cout << "Second occurrence not found." << endl;
        }
    } else {
        cout << "Letter not found in the text." << endl;
    }

    return 0;
}
