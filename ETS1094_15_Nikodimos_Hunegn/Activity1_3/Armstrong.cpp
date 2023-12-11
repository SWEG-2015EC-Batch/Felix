#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, original_num, counter = 0, current, armstrong = 0;

    cout<<"Enter a number: ";
    cin>>num;
    
    original_num = num;

    // Counting the number of digits
    while(num > 0){
        num /= 10;
        counter++;
    }

    num = original_num;

    while(num > 0){
        current = num % 10;
        armstrong += pow(current, counter);
        num /= 10;
    }

    if(armstrong == original_num){
        cout<<"Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }
}
