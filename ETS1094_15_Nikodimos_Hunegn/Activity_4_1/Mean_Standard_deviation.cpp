#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    float sum = 0.0, Squaresum = 0.0;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " numbers, separated by spaces: ";

    for (int i = 0; i < n; ++i) {
        float num;
        cin >> num;

        sum += num;
        Squaresum += num * num;

        cout << "Number " << i + 1 << ": " << num << endl;
    }

    double mean = sum / n;
    double variance = (Squaresum - (sum * sum) / n) / n;
    double stdDev = sqrt(variance);

    cout << "Mean: " << mean << endl;
    cout << "Standard Deviation: " << stdDev << endl;

    return 0;
}
