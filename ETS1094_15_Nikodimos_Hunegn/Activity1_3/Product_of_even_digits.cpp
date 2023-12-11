#include <iostream>

using namespace std;

int main()
{
    int num, product = 1, current;

    cout<<"Enter a number: ";
    cin>>num;

    while(num > 0){
        current = num % 10;
        if(current % 2 == 0){
            product *= current;
        }
        num /= 10;
    }
    if(product > 1){
        cout<<"The product of even digits in the given number is: "<<product;
    }
    else{
        cout<<"There is no even digit in the given number";
    }
}
