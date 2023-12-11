#include <iostream>

using namespace std;

int main()
{
    int num, counter = 0;

    cout<<"Enter a number: ";
    cin>>num;

    while(num > 0){
        counter++;
        num /= 10;
    }
    cout<<"The number of digits in the given number is: "<<counter;
}
