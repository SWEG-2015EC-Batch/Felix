//This program calculates the nuumber of  miles a car can travel without refueling
#include <iostream>
using namespace std;
int main() {
    cout << "                        Miles Calculator      " << endl;
    cout << "===============================================================" << endl;
    cout << "Please enter the capacity of your car's fuel tank in gallons: ";
    int fuel_capacity {0};
    cin >> fuel_capacity;
    cout << "Please enter the miles per gallon your automobile can be driven: ";
    double miles_per_gal {0};//declaring and initializing miles per gallon
    cin >> miles_per_gal;
    double num_miles {0};//declaring and initializing miles without refueling
    num_miles = fuel_capacity * miles_per_gal;
    cout << "Your car can travel " << num_miles << " miles without refueling.";
    return 0;
}
