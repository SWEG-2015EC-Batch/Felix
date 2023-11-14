/*this is a program that calculates how much miles can autombile travel with
out refuling by inserting the tank capacity and miles per gallon*/
#include <iostream>
using namespace std;

int main() {
    double tankCapacity, milesPerGallon;

    cout << "Enter the capacity of the fuel tank in gallons: ";
    cin >> tankCapacity;

    cout << "Enter the miles per gallon the automobile can travel: ";
    cin >> milesPerGallon;

    double milesWithoutRefueling = tankCapacity * milesPerGallon;

    cout << "The automobile can be driven for approximately " << milesWithoutRefueling << " miles without refueling." << endl;

    return 0;
}
