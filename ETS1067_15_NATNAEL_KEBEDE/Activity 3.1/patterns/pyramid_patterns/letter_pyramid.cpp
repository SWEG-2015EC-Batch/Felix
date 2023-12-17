#include <iostream>
using namespace std;
int main() {
    int numRows;

    cout << "Enter the number of rows for the pattern: ";
    cin >> numRows;

    if (numRows > 0) {
        char ch = 'A';

        cout << "Right Angle Triangle Pattern:" << endl;
        for (int i = 1; i <= numRows; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << ch << " ";
                ch++;
            }
            ch = 'A'; // Reset the character to 'A' for the next row
          cout << endl;
        }
    } else {
       cout << "Number of rows should be greater than zero." << endl;
    }

    return 0;
}
