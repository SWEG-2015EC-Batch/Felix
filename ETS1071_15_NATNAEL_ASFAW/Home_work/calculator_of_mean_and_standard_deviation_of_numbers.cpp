#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double sum = 0.0;
    double sumSquared = 0.0;
    double number;

    cout << "Enter the numbers (enter any non-numeric value to stop):\n";

    int count1 = 0;
    while (cin >> number) {
        count1++;
        sum += number;
        sumSquared += number * number;

        cout << "Element " << count1 << ": " << number << "\n";
    }

    if (count1 == 0) {
        cout << "No numbers were entered.\n";
        return 0;
    }

    double mean = sum / count1;
    double variance = (sumSquared / count1) - (mean * mean);
    double standardDeviation = sqrt(variance);

    cout << "\n";
    cout << "Total Number of Input numbers: " << count1 << "\n";
    cout << "Mean: " << mean << "\n";
    cout << "Standard Deviation: " << standardDeviation << "\n";

    return 0;
}
