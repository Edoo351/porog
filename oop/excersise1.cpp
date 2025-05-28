#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

void writeToFile() {
    ofstream file("text.txt");
    char c;
    while ((c = cin.get()) != '#') {
        file.put(c);
    }
    file.close();
}

int main() {
    writeToFile();

    char c;
    cout << "Enter the character to find its relative frequency: ";
    cin >> c;

    // Convert the input character to lowercase to make the comparison case-insensitive
    c = tolower(c);

    ifstream file("text.txt");
    if (!file.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1;
    }

    int totalValidChars = 0;
    int charCount = 0;
    char ch;
    while (file.get(ch)) {
        if (isalnum(ch)) {
            totalValidChars++;
            if (tolower(ch) == c) {
                charCount++;
            }
        }
    }
    file.close();

    if (totalValidChars == 0) {
        cout << "No valid characters in the text." << endl;
    } else {
        double relativeFrequency = static_cast<double>(charCount) / totalValidChars;
        cout << "The relative frequency of '" << c << "' is " << relativeFrequency << endl;
    }

    return 0;
}
