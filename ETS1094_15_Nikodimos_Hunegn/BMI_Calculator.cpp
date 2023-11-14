#include <iostream>

using namespace std;

int main() {
    int height;
    float weight, h_in_m, bmi;
  
    cout<<"Enter Height in Centimeters(cm): ";
    cin>>height;
  
    cout<<"Enter Weight in Kilograms(kg): ";
    cin>>weight;
  
    h_in_m = static_cast<float>(height) / 100;
    bmi = weight / (h_in_m * h_in_m);
  
    cout<<"Your BMI is "<<bmi;
  
    return 0;
}
