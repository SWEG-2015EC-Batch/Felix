#include <iostream>
#include <math.h>


using namespace std;

int main() {
    float base, power, result;

    cout<<"Enter the base: ";
    cin>>base;
    cout<<"Enter the power: ";
    cin>>power;
  
    result = pow(base,power);
  
    cout<<base<<" the power of "<<power<<" is "<<result;
  
    return 0;
}
