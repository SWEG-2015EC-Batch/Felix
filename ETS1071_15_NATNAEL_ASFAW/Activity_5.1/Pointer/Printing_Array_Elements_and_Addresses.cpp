#include <iostream>
using namespace std;

int main() {
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    int arr[3][4] = {{10, 11, 12, 13}, {20, 21, 22, 23}, {30, 31, 32, 33}};

    // Printing the address of each array element
    cout << "Addresses of elements in 'balance' array:" <<endl;
    for (int i = 0; i < 5; i++) {
        cout << "balance[" << i << "] = " << &balance[i] << endl;
    }

    cout << endl;

    cout << "Addresses of elements in 'arr' array:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "arr[" << i << "][" << j << "] = " << &arr[i][j] << endl;
        }
    }

    // Printing the array elements using pointers instead of array index
    cout << endl;
    cout << "Printing 'balance' array elements using pointers:" << endl;
    double *ptrBalance = balance;
    for (int i = 0; i < 5; i++) {
    cout << "*(ptrBalance + " << i << ") = " << *(ptrBalance + i) << endl;
    }

    cout << endl;

    cout << "Printing 'arr' array elements using pointers:" << endl;
    int *ptrArr = *arr;
    for (int i = 0; i < 12; i++) {
    cout << "*(ptrArr + " << i << ") = " << *(ptrArr + i) << endl;
    }

    return 0;
}
