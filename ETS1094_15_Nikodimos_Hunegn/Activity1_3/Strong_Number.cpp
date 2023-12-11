#include <iostream>

using namespace std;

int factorial(int num){

    int fact = 1;

    for(int i = 1; i <= num; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num, sum = 0, current, original_num;
    cout<<"Enter a number: ";
    cin>>num;
    original_num = num;
    
    while(num > 0){
        current = num % 10;
        sum += factorial(current);
        num /= 10;
    }

    if(sum == original_num){
        cout<<"It is a strong number";
    }
    else{
        cout<<"It is not a strong number";
    }

}
