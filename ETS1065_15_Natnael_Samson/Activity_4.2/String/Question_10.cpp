#include <iostream>
#include <cstring>

using namespace std;

int main() {
    const int maxPasswordLength = 20;
    char storedPassword[maxPasswordLength] = "secure123";

    char enteredPassword[maxPasswordLength];

    cout << "Enter the password: ";
    cin.getline(enteredPassword, maxPasswordLength);

    // Compare entered password with the stored password
    if (strcmp(storedPassword, enteredPassword) == 0) {
        cout << "Password is correct. Access granted!" << endl;
    } else {
        cout << "Incorrect password. Access denied!" << endl;
    }

    return 0;
}
