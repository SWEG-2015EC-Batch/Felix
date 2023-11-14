#include <iostream>
#include <ctype.h>
using namespace std;

int main() {
    char letter;
    cout << "Enter a letter: ";
    cin >> letter;

    if (islower(letter)) {
        cout << "Uppercase equivalent: " << (char)toupper(letter) << endl;
    } else if (isupper(letter)) {
        cout << "Lowercase equivalent: " << (char)tolower(letter) << endl;
    } else {
        cout << "Invalid input. Please enter a letter." << endl;
    }

    return 0;
}
