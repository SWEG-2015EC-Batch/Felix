#include <iostream>
#include <sstream>
using namespace std;

int main() {
    string input;
    cout << "Enter a line of text: ";
    getline(cin, input);

    stringstream ss(input);
    string token;

    cout << "Tokens separated by space characters:" << endl;
    while (ss >> token) {
        cout << token << endl;
    }

    return 0;
}
