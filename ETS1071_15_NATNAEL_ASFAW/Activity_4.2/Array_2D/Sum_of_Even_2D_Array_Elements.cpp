#include <iostream>
using namespace std;

int main() {
    const int ROWS = 3;
    const int COLS = 4;
    int array[ROWS][COLS];

    // Input elements for the array
    cout << "Enter " << ROWS * COLS << " elements for the " << ROWS << "x" << COLS << " array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> array[i][j];
        }
    }


    int sumEven = 0;
    cout << "\nArray with even elements and '*' for odd elements:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            if (array[i][j] % 2 == 0) {
                cout << array[i][j] << "\t";
                sumEven += array[i][j];
            } else {
                cout << "*\t";
            }
        }
        cout << endl;
    }


    cout << "\nSum of even array elements: " << sumEven << endl;

    return 0;
}
