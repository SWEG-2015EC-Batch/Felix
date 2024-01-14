#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;

    string cleanedWord = "";

    for (char ch : word) {
        if (isalpha(ch)) {
            cleanedWord += tolower(ch);
        }
    }

    int length = cleanedWord.length();
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; ++i) {
        if (cleanedWord[i] != cleanedWord[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}
