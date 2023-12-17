#include <iostream>
using namespace std;

int main() {
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    for (int i = 1; i <= row; i++) {
        int value = 1; // Initialize the value to print
        for (int j = 1; j <= i; j++) {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }

    return 0;
}
