#include <iostream>

using namespace std;

int main() {
    float capacity, miles_per_gallon, distance;
  
    cout<<"Enter the capacity in gallons of the fuel tank: ";
    cin>>capacity;
    cout<<"Enter the number of miles the automobile can be driven per a gallon of fuel:";
    cin>>miles_per_gallon;
  
    distance = capacity * miles_per_gallon;
  
    cout<<"Your automobile can be driven "<<distance<<" miles without refueling";
  
    return 0;
}
