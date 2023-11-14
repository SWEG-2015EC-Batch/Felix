#include <iostream>
using namespace std;
int main ()
{
    cout << "Enter your Height in meter " << endl;
    double Height;
    cin >>Height;
    cout << "Enter your Weight in kilogram " << endl;
    double Weight;
    cin >>Weight;
    double BMI;
    BMI = Weight/(Height*Height);
    cout << "Your BMI(body mass index) = " <<BMI<< endl;
    return 0;
}
