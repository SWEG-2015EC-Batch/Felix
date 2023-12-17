#include <iostream>

using namespace std;

int main()
{
    int num, org_num, temp, counter = 0, first, last;

    cout<<"Enter the number: ";
    cin>>num;

    org_num = num;

    while(num != 0){
        counter++;
        num /= 10;
    }

    for(int i = 1; i <= counter; i++){
        temp = org_num % 10;
        if(i == counter){
            first = temp;
        }
        else if(i == 1){
            last = temp;
        }
        org_num /= 10;
    }

    cout<<"First digit is: "<<first<<endl;
    cout<<"Last digit is: "<<last<<endl;
    cout<<"The sum of the digits is: "<<first + last<<endl;

}
