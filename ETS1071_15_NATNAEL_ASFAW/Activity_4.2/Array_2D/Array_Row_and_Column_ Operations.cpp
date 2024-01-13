#include <iostream>
#include <vector>
using namespace std;
int main() {
    const int ROWS = 3;
    const int COLS = 3;
    int array[ROWS][COLS];

    cout << "Enter " << ROWS * COLS << " elements for the " << ROWS << "x" << COLS << " array:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cin >> array[i][j];
        }
    }


    vector<int> rowProducts;
    vector<int> colSums(COLS, 0);
    for (int i = 0; i < ROWS; ++i) {
        int rowProduct = 1;
        for (int j = 0; j < COLS; ++j) {
            rowProduct *= array[i][j];
            colSums[j] += array[i][j];
        }
        rowProducts.push_back(rowProduct);
    }


    cout << "\nMultiplication of row elements:" << endl;
    for (int i = 0; i < ROWS; ++i) {
        cout << "Row " << i + 1 << ": " << rowProducts[i] << endl;
    }
    cout << "\nSum of column elements:" << endl;
    for (int j = 0; j < COLS; ++j) {
    cout << "Column " << j + 1 << ": " << colSums[j] << endl;
    }

    return 0;
}
