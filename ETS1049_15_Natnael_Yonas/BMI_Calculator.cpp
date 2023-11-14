//This Program Is used To Calculate A persons Body Mass Index
#include <iostream>
using namespace std;
int main()
{
    cout << "Enter your body weight in kilograms" << endl;
    double bodyWeight = 0;
    cin >> bodyWeight;
    cout << "Enter Your Height in meters" << endl;
    double height = 0;
    cin >> height;
    double bmi = bodyWeight/(height*height);
    cout << " your BMI is " << bmi << endl;
    return 0;
}
