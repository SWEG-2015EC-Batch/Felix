//This Program Is used To Calculate the number of miles an automobile can be driven without refueilling
#include <iostream>
using namespace std;
int main()
{

    cout << "Enter the capacity of fuel tank of your automobile ";
    double  fuelCapacity= 0;
    cin >> fuelCapacity;
    cout << "Enter the miles per gallon your automobile can be driven "  ;
    double milesPerGallon = 0;
    cin >> milesPerGallon;
    double miles = fuelCapacity * milesPerGallon;
    cout << "the number of miles your automobiles can be driven without refuling is " << miles << endl;
    return 0;
}
