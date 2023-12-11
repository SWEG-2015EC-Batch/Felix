#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    string num, reversed;

    cout<<"Enter a number: ";
    cin>>num;
    reversed = num;
    reverse(reversed.begin(), reversed.end());

    if(num == reversed){
        cout<<"Palindrom";
    }
    else{
        cout<<"Not Palindrom";
    }
}
