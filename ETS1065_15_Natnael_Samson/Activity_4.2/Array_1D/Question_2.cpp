#include <iostream>
using namespace std;
int main () {
    float temp [8], total{0}, average {0};
    cout <<"Please enter 8 numbers followed by space: ";
    for (int i {0}; i < 8; i++) {
        cin >>temp[i];
        total += temp[i];
    }
    average = total/8;
    cout <<"The numbers are ";
    for (int i {0}; i < 8; i++) {
        cout<<temp[i]<<" ";
    }
    cout <<"and the average is " <<average;
    return 0;
}
