#include <iostream>

using namespace std;

int main()
{
    int num, reversed = 0, temp;
    cout<<"Enter the number: ";
    cin>>num;

    while(num != 0){
        temp = num % 10;
        reversed = reversed * 10 + temp;
        num /= 10;
    }

    cout<<"The reverse of the number you entered is: "<<reversed;

}
