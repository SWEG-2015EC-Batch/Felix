#include <iostream>
using namespace std;

int main() {
    const int SIZE = 8;
    int temp[SIZE];
    int total = 0;


    cout << "Enter eight integer numbers:" << endl;
    for (int i = 0; i < SIZE; ++i) {
        cin >> temp[i];
        total += temp[i];
    }
    double average = static_cast<double>(total) / SIZE;


    cout << "The total of the numbers is: " << total << endl;
    cout << "The average of the numbers is: " << average << endl;

    return 0;
}
