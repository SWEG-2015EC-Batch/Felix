#include <iostream>

using namespace std;

int main(){
    
    float temp[8] = {}, sum = 0, avg;

    for(int i = 0; i < 8; i++){
        cout<<"Enter number: ";
        cin>>temp[i];
        sum += temp[i];
    }

    avg =  sum / 8;

    cout<<"The numbers you entered are: ";
    for(int j = 0; j < 8; j++){
        cout<<temp[j]<<", ";
    }
    cout<<endl<<"The mean of this numbers is: "<<avg;

}
