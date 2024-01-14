#include <iostream>

using namespace std;

int main()
{
    char names[3][20] = {};

    cout<<"Enter your firs, middle, and last names: ";
    cin>>names[0]>>names[1]>>names[2];

    cout<<"Your Initials are: "<<names[0][0]<<". "<<names[1][0]<<". "<<names[2][0]<<". ";
}