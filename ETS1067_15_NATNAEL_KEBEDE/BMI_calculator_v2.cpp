//this program calculate your body mass index
#include <iostream>
using namespace std;
int main ()
{
    
    cout << "enter: " <<endl<<"m - for male" <<endl<<"f - for female"<<endl;
     char Gender;
     cin >> Gender;
  
     double Height;
    cout << "Enter your Height in meter " << endl;
     cin >>Height;
    double Weight;
    cout << "Enter your Weight in kilogram " << endl;
     cin >>Weight;
    double BMI;
    BMI = Weight/(Height*Height);
    cout << "Your BMI(body mass index) = " <<BMI<< endl;

cout << "----------------------------------------"<<endl;

if (Gender == 'f')
{
    if (BMI < 18.5 ) {
        cout << "You are underweight." << endl;
    } else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "You are normal weight." << endl;
    } else if (BMI >= 25 && BMI <= 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obesity." << endl;
    }                       
    
}  
   else if (Gender == 'm')
{
   if (BMI < 20.5 ) {
        cout << "You are underweight." << endl;
    } else if (BMI >= 20.5 && BMI <= 25.9) {
        cout << "You are normal weight." << endl;
    } else if (BMI >= 26 && BMI <= 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obesity." << endl;
    }                       
 }   
 cout << "----------------------------------------"<<endl;
    return 0;
}
