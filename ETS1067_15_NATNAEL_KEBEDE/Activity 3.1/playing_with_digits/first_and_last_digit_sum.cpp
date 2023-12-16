//this program add the first and last digits of a given a number
#include <iostream>
using namespace std;
int main(){
    long int num,first_digit,last_digit;
    cout << "Enter the number: ";
    cin>>num;
    last_digit = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }
    first_digit = num;
    int digits_sum = first_digit + last_digit;
    cout <<"the sum of the first and the last digit is: "<<first_digit<<"+"<<last_digit<<"="<<digits_sum;
    return 0;
    }
