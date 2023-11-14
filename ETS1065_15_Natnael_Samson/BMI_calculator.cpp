//This Program Is used To Calculate A persons Body Mass Index
#include <iostream>
using namespace std;
int main () {
    cout << "      BMI Calculator      " << endl;
    cout << "===========================" << endl;
    cout << "Please enter your weight in kilograms: ";
    double body_weight {0};
    cin >> body_weight;
    cout << "Please enter your height in meters: ";
    double height {0};
    cin >> height;
    double BMI {0};//declaring and initializing body mass index 
    BMI = body_weight/(height*height);
    cout << "Your body mass index is " << BMI << endl;
    return 0;
}
