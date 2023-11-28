#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main() {
    float bmi,weight,h,n,i;
    char gender;

    cout<<"For how many people do you want me to compute: ";
    cin>>n;

for(i = 0; i < n; i++){
    cout<<"\nThis is for person "<<i+1<<endl;
    cout<<"Enter Height in Centimeters(cm): ";
    cin>>h;

    cout<<"Enter Weight in Kilograms(kg): ";
    cin>>weight;

    bmi = weight / pow(h,2);

    cout<<"Are you (M)ale or (F)emale: ";
    cin>>gender;

    switch(toupper(gender)){
        case 'F':
            if(bmi < 18.5){
                cout<<"Under weight";
            }
            else if (bmi >= 18.5 && bmi <= 24.9){
                cout<<"Normal weight";
            }
            else if(bmi > 24.9 && bmi <= 29.9){
                cout<<"Over weight";
            }
            else{
                cout<<"Obese";
            }
            break;
        case 'M':
            if(bmi < 20.5){
                cout<<"Under weight";
            }
            else if (bmi >= 20.5 && bmi <= 25.9){
                cout<<"Normal weight";
            }
            else if(bmi > 25.9 && bmi <= 29.9){
                cout<<"Over weight";
            }
            else{
                cout<<"Obese";
            }
            break;
        default:
            cout<<"Wrong gender input";
            break;
    }


    cout<<"\nYour BMI is "<<bmi<<endl<<endl;
    }

    return 0;
}
