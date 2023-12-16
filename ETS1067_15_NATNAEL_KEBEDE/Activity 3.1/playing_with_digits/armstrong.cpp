//this program tells whether a given number is armstrong number or not
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int num, temp, num1, counter = 0, sum = 0;

    cout << "Enter the number: ";
    cin >> num;

    int copynum = num;
    int copysum = 0; // Initialize copysum to zero

    while (num > 0) {
        num = num / 10;
        counter++;
    }

    num = copynum; // Reset num to the original input value

    while (num > 0) {
        temp = num % 10;
        num = num / 10;
        num1 = pow(temp, counter);
        sum += num1;
    }

    copysum = sum; // Assign the calculated sum to copysum

    if (copysum == copynum) {
        cout << "The number is an Armstrong number." << endl;
    } else {
        cout << "The number is not an Armstrong number." << endl;
    }

    return 0;
}
