#include <iostream>
#include <cctype>

using namespace std;

int main() {
    char letter;

    cout << "Enter a letter: ";
    cin >> letter;

    if (islower(letter)) {
        cout << "The uppercase for '" << letter << "' is '" << static_cast<char>(toupper(letter)) << "'" << endl;
    }
    else if (isupper(letter)) {
        cout << "The lowercase for '" << letter << "' is '" << static_cast<char>(tolower(letter)) << "'" << endl;
    }
    else {
        cout << "Invalid input" << endl;
    }

    return 0;
}
