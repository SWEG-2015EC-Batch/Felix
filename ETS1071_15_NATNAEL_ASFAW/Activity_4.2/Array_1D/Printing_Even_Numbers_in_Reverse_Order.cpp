#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> numbers;
    int input;


    cout << "Enter a list of numbers (-1 to end):" << endl;
    while (true) {
        cin >> input;
        if (input == -1) {
            break;
        }
        numbers.push_back(input);
    }


    cout << "Even numbers in reverse order:" << endl;
    for (int i = numbers.size() - 1; i >= 0; --i) {
        if (numbers[i] % 2 == 0) {
            cout << numbers[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
