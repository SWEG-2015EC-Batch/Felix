#include <iostream>

using namespace std;

int main()
{
    int sum = 0, num;

    cout<<"Enter a number: ";
    cin>>num;

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            sum += i;
        }
    }
    if(num == sum){
        cout<<"The number is perfect";
    }
    else{
        cout<<"The number is not perfect";
    }
}
