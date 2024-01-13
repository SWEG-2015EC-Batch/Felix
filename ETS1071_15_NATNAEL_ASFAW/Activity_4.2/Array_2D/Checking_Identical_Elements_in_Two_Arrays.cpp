#include <iostream>
using namespace std;

bool arraysAreIdentical(const int arr1[], const int arr2[], int size) {
    for (int i = 0; i < size; ++i) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    const int size = 5;
    int array1[size];
    int array2[size];


    cout << "Enter " << size << " elements for the first array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array1[i];
    }


    cout << "Enter " << size << " elements for the second array:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> array2[i];
    }


    if (arraysAreIdentical(array1, array2, size)) {
        cout << "The arrays are identical." << endl;
    } else {
        cout << "The arrays are not identical." << endl;
    }

    return 0;
}
