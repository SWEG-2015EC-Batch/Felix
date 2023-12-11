#include <iostream>

using namespace std;

int main()
{
    int sum = 0, num, current;
    cout<<"Enter the number: ";
    cin>>num;

    while(num > 0){
        current = num % 10;
        sum += current;
        num /= 10;
    }
    cout<<"The sum of the digits is: "<<sum;
}
