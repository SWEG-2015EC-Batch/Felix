#include <iostream>
using namespace std;

int main(){
   // Declare variable for weight and height
   double weight,height,bmi;

   //Prompt the user to enter their weight in kilograms
   cout <<"Enter your weight in kilograms:";
   cin >> weight;

   //Prompt the user to enter their height in centimeters
   cout <<"Enter your height in meters:";
   cin >> height;

   //Calculate the BMI by dividing the weight in kilograms by the height in meters squared
      bmi = weight / (height * height);

    // Print the calculated BMI
    cout << "Your BMI is:"<<bmi<<endl;

    return 0;
}

