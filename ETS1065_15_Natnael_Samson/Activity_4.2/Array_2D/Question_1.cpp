#include <iostream>
using namespace std;

int main() {
    int nums[5];
    int nums2[5];

    cout << "Please enter 5 values for the first array: ";
    for (int i = 0; i < 5; i++) {
        cin >> nums[i];
    }

    cout << "Please enter 5 values for the second array: ";
    for (int i = 0; i < 5; i++) {
        cin >> nums2[i];
    }

    bool arraysEqual = true;

    for (int i = 0; i < 5; i++) {
        if (nums[i] != nums2[i]) {
            arraysEqual = false;
            break; 
        }
    }

    if (arraysEqual) {
        cout << "The two arrays are equal";
    } else {
        cout << "The two arrays are not equal";
    }

    return 0;
}
