#include <iostream>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int charFrequency[26] = {0}; // Assuming only lowercase alphabets

    for (char ch : input) {
        if (isalpha(ch)) {
            char lowercaseCh = tolower(ch);
            charFrequency[lowercaseCh - 'a']++;
        }
    }

    char maxChar = '\0', minChar = '\0';
    int maxFrequency = 0, minFrequency = input.length() + 1;

    for (int i = 0; i < 26; ++i) {
        if (charFrequency[i] > maxFrequency) {
            maxFrequency = charFrequency[i];
            maxChar = i + 'a';
        }

        if (charFrequency[i] < minFrequency && charFrequency[i] > 0) {
            minFrequency = charFrequency[i];
            minChar = i + 'a';
        }
    }

    cout << "Character with the largest frequency: " << maxChar << endl;
    cout << "Character with the smallest frequency: " << minChar << endl;

    return 0;
}
