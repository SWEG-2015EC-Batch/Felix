#include <iostream>
#include <sstream>
using namespace std;
int main() {
    int max_toxens = 100;
    cout << "Enter a line of text: ";
    string inputLine;
    getline(cin, inputLine);
    istringstream ss(inputLine);
    string token;
    string tokens[100];
    int tokenCount = 0;

    while (getline(ss, token, ' ')) {
        tokens[tokenCount] = token;
        tokenCount++;
    }
    cout << "\nTokens:\n";
    for (int i = 0; i < tokenCount; ++i) {
        cout << tokens[i] << "\n";
    }
return 0;
}
