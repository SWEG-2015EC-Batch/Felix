#include <iostream>
using namespace std;

int main(){
    // Declare variable for tank capacity and miles per gallon
   double tankCapacity, milesPerGallon;

   //Prompt the user to input tank capacity in gallons
   cout <<"Enter the capacity of the fuel tank in gallons:";
   cin >> tankCapacity;

   //Prompt the user to input miles per gallon
   cout <<"Enter the miles per gallon of the automobile:";
   cin >> milesPerGallon;

   //Calculate the numbers of miles the automobile can be driven without refueling
    double milesPossible =tankCapacity *milesPerGallon;

    // Print the result
    cout << "The automobile can be driven for:"<<milesPossible<<" miles without refueling"<<endl;

    return 0;
}

