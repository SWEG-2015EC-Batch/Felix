//frequency of digits table maker
#include <iostream>
using namespace std;

int main() {
    int number, digit, temp;
    int frequency[10] = {0}; 

 
    cout << "Enter a number: ";
    cin >> number;

    temp = number;

    
    while (temp != 0) {
        digit = temp % 10;
        frequency[digit]++;
        temp /= 10;
    }

   
    cout << "Digit | Frequency" << endl;
    cout << "-------------" << endl;
    for (int i = 0; i < 10; i++) {
        if (frequency[i] > 0) {
            cout << "  " << i << "   |    " << frequency[i] << endl;
        }
    }

    return 0;
}
