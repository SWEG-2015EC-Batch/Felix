// This program calculates the result of raising a given number (x) to a specified power (y).
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x, y, result;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;

    // Calculate x to the power of y
    result = pow(x, y);
    cout << x << " raised to the power of " << y << " is " << result << endl;

    return 0;
}
