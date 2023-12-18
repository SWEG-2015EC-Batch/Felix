#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice, num;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Menu:\n";
    cout << "1. Reverse of the number\n";
    cout << "2. Count number of digits\n";
    cout << "3. Sum of digits\n";
    cout << "4. Product of even digits\n";
    cout << "5. First and last digit and their sum\n";
    cout << "6. Swap first and last digit\n";
    cout << "7. Check if palindrome\n";
    cout << "8. Digit frequency\n";
    cout << "9. Check if Armstrong\n";
    cout << "10. Check if Strong\n";
    cout << "11. Check if Perfect\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1: {
            // Reverse the number
            int reversedNum = 0;
            while (num > 0) {
                reversedNum = reversedNum * 10 + num % 10;
                num /= 10;
            }
            cout << "Reversed number: " << reversedNum << endl;
            break;
        }
        case 2: {
            // Count number of digits
            int count = 0;
            while (num > 0) {
                count++;
                num /= 10;
            }
            cout << "Number of digits: " << count << endl;
            break;
        }
        case 3: {
            // Sum of digits
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            cout << "Sum of digits: " << sum << endl;
            break;
        }
        case 4: {
            // Product of even digits
            int product = 1;
            while (num > 0) {
                int digit = num % 10;
                if (digit % 2 == 0) {
                    product *= digit;
                }
                num /= 10;
            }
            cout << "Product of even digits: " << product << endl;
            break;
        }
        case 5: {
            // First and last digit and their sum
            int lastDigit = num % 10;
            while (num >= 10) {
                num /= 10;
            }
            int firstDigit = num;
            int sum = firstDigit + lastDigit;
            cout << "First digit: " << firstDigit << endl;
            cout << "Last digit: " << lastDigit << endl;
            cout << "Sum of first and last digit: " << sum << endl;
            break;
        }
        case 6: {
            // Swap first and last digit
            int digits = 0;
            int temp = num;
            while (temp != 0) {
                temp /= 10;
                digits++;
            }
            if (digits < 2) {
                cout << "Number cannot be swapped." << endl;
            } else {
                int lastDigit = num % 10;
                int firstDigit = num / pow(10, digits - 1);
                int withoutFirstLast = num % (int)pow(10, digits - 1) / 10;
                int swappedNum = lastDigit * pow(10, digits - 1) + withoutFirstLast * 10 + firstDigit;
                cout << "Number after swapping first and last digit: " << swappedNum << endl;
            }
            break;
        }
        case 7: {
            // Check if palindrome
            int originalNum = num;
            int reversedNum = 0;
            while (num > 0) {
                reversedNum = reversedNum * 10 + num % 10;
                num /= 10;
            }
            if (originalNum == reversedNum) {
                cout << "The number is a palindrome." << endl;
            } else {
                cout << "The number is not a palindrome." << endl;
            }
            break;
        }
        case 8: {
            // Digit frequency
            int temp = num;
            int frequency0 = 0, frequency1 = 0, frequency2 = 0, frequency3 = 0, frequency4 = 0,
                frequency5 = 0, frequency6 = 0, frequency7 = 0, frequency8 = 0, frequency9 = 0;

            while (temp > 0) {
                int digit = temp % 10;

                // Update frequencies based on the digit
                if (digit == 0) frequency0++;
                else if (digit == 1) frequency1++;
                else if (digit == 2) frequency2++;
                else if (digit == 3) frequency3++;
                else if (digit == 4) frequency4++;
                else if (digit == 5) frequency5++;
                else if (digit == 6) frequency6++;
                else if (digit == 7) frequency7++;
                else if (digit == 8) frequency8++;
                else if (digit == 9) frequency9++;

                temp /= 10;
            }

            // Display digit frequencies
            cout << "Digit\tFrequency" << endl;
            if (frequency0 > 0) cout << "0\t" << frequency0 << endl;
            if (frequency1 > 0) cout << "1\t" << frequency1 << endl;
            if (frequency2 > 0) cout << "2\t" << frequency2 << endl;
            if (frequency3 > 0) cout << "3\t" << frequency3 << endl;
            if (frequency4 > 0) cout << "4\t" << frequency4 << endl;
            if (frequency5 > 0) cout << "5\t" << frequency5 << endl;
            if (frequency6 > 0) cout << "6\t" << frequency6 << endl;
            if (frequency7 > 0) cout << "7\t" << frequency7 << endl;
            if (frequency8 > 0) cout << "8\t" << frequency8 << endl;
            if (frequency9 > 0) cout << "9\t" << frequency9 << endl;

            break;
        }

        case 9: {
            // Check if Armstrong
            int originalNum = num;
            int sum = 0;
            int numDigits = 0;

            // Count the number of digits
            int temp = num;
            while (temp > 0) {
                numDigits++;
                temp /= 10;
            }

            // Calculate the sum of digits raised to the power of numDigits
            temp = num;
            while (temp > 0) {
                sum += pow(temp % 10, numDigits);
                temp /= 10;
            }

            // Check if the number is Armstrong
            if (sum == originalNum) {
                cout << "The number is an Armstrong number." << endl;
            } else {
                cout << "The number is not an Armstrong number." << endl;
            }
            break;
        }
        case 10: {
            // Check if Strong
            int originalNum = num;
            int sum = 0;

            // Calculate the sum of factorials of digits
            int temp = num;
            while (temp > 0) {
                int digit = temp % 10;
                int factorial = 1;
                for (int i = 1; i <= digit; i++) {
                    factorial *= i;
                }
                sum += factorial;
                temp /= 10;
            }

            // Check if the number is Strong
            if (sum == originalNum) {
                cout << "The number is a Strong number." << endl;
            } else {
                cout << "The number is not a Strong number." << endl;
            }
            break;
        }
        case 11: {
            // Check if Perfect
            int sum = 0;

            // Calculate the sum of divisors
            for (int i = 1; i <= num / 2; i++) {
                if (num % i == 0) {
                    sum += i;
                }
            }

            // Check if the number is Perfect
            if (sum == num) {
                cout << "The number is a Perfect number." << endl;
            } else {
                cout << "The number is not a Perfect number." << endl;
            }
            break;
        }
        default:
            cout << "Invalid choice." << endl;
    }

    return 0;
}
