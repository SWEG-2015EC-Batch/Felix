#include <iostream>
using namespace std;

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    int reverse[5];  // Assuming the maximum possible size is 5
    int k = 0;

    for (int i = 0; i < 5; i++) {
        if (nums[i] % 2 == 0) {
            reverse[k] = nums[i];
            k++;
        }
    }

    cout << "nums: ";
    for (int i = 0; i < 5; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    cout << "Reverse even: ";
    for (int i = k - 1; i >= 0; i--) {
        cout << reverse[i] << " ";
    }
    cout << endl;

    return 0;
}
