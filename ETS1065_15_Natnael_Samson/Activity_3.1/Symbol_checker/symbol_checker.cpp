#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input character from the user
    cout << "Enter a character: ";
    cin >> ch;

    // Check if the character is uppercase, lowercase, digit, or special character
    if (isalpha(ch)) {
        if (isupper(ch)) {
            cout << "Uppercase letter." << endl;
        } else {
            cout << "Lowercase letter." << endl;
        }
    } else if (isdigit(ch)) {
        cout << "Digit." << endl;
    } else {
        cout << "Special character." << endl;
    }

    // Check if the character is a vowel or consonant
    if (isalpha(ch)) {
        switch (tolower(ch)) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                cout << "Vowel." << endl;
                break;
            default:
                cout << "Consonant." << endl;
        }
    }

    // Check if the character is even or odd (applicable only for digits)
    if (isdigit(ch)) {
        int num = ch - '0'; // Convert character to integer
        if (num % 2 == 0) {
            cout << "Even number." << endl;
        } else {
            cout << "Odd number." << endl;
        }
    }

    return 0;
}
