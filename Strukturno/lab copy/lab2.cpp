#include <iostream>
#include <cctype>

using namespace std;

double letterFrequency(const char* text, char letter) {
    int totalLetters = 0;
    int letterCount = 0;

    for (int i = 0; text[i] != '\0' && i < 1000; i++) {
        char currentChar = tolower(text[i]);

        if (isalpha(currentChar)) {
            totalLetters++;

            if (currentChar == tolower(letter)) {
                letterCount++;
            }
        }
    }

    double frequency = (totalLetters > 0) ? static_cast<double>(letterCount) / totalLetters : 0.0;

    return frequency;
}

int main() {
    char text[1001]; 
    char specifiedLetter;

    cout << "Enter the text (up to 1000 characters): ";
    cin.getline(text, sizeof(text));

    cout << "Enter the letter to calculate frequency for: ";
    cin >> specifiedLetter;

    double frequency = letterFrequency(text, specifiedLetter);

    cout << "Relative frequency of letter '" << specifiedLetter << "': " << frequency << endl;

    return 0;
}
