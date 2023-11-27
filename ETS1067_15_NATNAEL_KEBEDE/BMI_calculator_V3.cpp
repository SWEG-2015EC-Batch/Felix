//this program calculate your body mass index
#include <iostream>
#include <math.h>
using namespace std;
int main ()
{
    int count;
    cout << "Enter the number of people you want to calculate for"<<endl;
    cin >>count;
    for (int i = 0; i < count; i++)
    {
      cout << "for person "<<i + 1<<endl;  
     char Gender;
    cout << "enter: " <<endl<<"m - for male" <<endl<<"f - for female"<<endl;
    cin >> Gender;

    
    cout << "Enter your Height in meter " << endl;
    double Height;
    cin >>Height;
    cout << "Enter your Weight in kilogram " << endl;
    double Weight;
    cin >>Weight;
    double BMI;
    BMI = Weight/pow(Height,2);
    cout << "Your BMI(body mass index) = " <<BMI<< endl;     
    
cout << "----------------------------------------"<<endl;

if (Gender == 'f' || 'F')
{
    
    if (BMI < 18.5 ) {
        cout << "You are underweight." << endl;
    } else if (BMI >= 18.5 && BMI <= 24.9) {
        cout << "You are normal weight." << endl;
    } else if (BMI >= 25 && BMI <= 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }                       
    
}  
   else if (Gender == 'm' || 'M')
{
   if (BMI < 20.5 ) {
        cout << "You are underweight." << endl;
    } else if (BMI >= 20.5 && BMI <= 25.9) {
        cout << "You are normal weight." << endl;
    } else if (BMI >= 26 && BMI <= 29.9) {
        cout << "You are overweight." << endl;
    } else {
        cout << "You are obese." << endl;
    }                       
 }  
 else {
    cout <<"you insert the wrong letter" <<endl;
 } 
 cout << "----------------------------------------"<<endl;                    
    }
    cout << "Thank you for using this program"<<endl;
    return 0;
}
