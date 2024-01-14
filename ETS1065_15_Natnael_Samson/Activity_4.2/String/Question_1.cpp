#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    int vowels = 0;
    int consonants = 0;

    for (char ch : input) {
        ch = tolower(ch);

        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

    return 0;
}
