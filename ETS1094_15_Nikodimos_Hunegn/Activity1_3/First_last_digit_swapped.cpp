#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int num, org_num, temp, counter = 0, first, last, swapped_num = 0, inner = 0;
    cout<<"Enter the number: ";
    cin>>num;

    org_num = num;

    while(num != 0){
        counter++;
        num /= 10;
    }

    for(int i = 1; i <= counter; i++){
        temp = org_num % 10;
        if(i == 1){
            last = temp;
        }
        else if(i == counter){
            first = temp;
        }
        else{
            swapped_num = swapped_num + temp * round(pow(10,inner));
            inner++;
        }
        org_num /= 10;
    }
    swapped_num = swapped_num + (last * round(pow(10, counter - 2)));
    swapped_num = swapped_num * 10 + first;
    cout<<"When swapping the first and last digit the number you entered becomes: "<<swapped_num;

}
