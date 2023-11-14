//This program takes a user-inputted letter and converts it to its uppercase or lowercase equivalent, or displays an error message if the input is not a letter.
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
