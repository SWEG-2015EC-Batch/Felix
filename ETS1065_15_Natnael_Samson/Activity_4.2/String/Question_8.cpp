#include <iostream>
#include <cctype>
using namespace std;

int main() {
    const int maxLength = 100;

    char inputText[maxLength];

    cout << "Enter a line of text: ";
    cin.getline(inputText, maxLength);

    cout << "Original Text: " << inputText << endl;

    for (int i = 0; inputText[i] != '\0'; ++i) {
        inputText[i] = toupper(inputText[i]);
    }

    cout << "Uppercase Text: " << inputText << endl;

    for (int i = 0; inputText[i] != '\0'; ++i) {
        inputText[i] = tolower(inputText[i]);
    }

    cout << "Lowercase Text: " << inputText << endl;

    return 0;
}
