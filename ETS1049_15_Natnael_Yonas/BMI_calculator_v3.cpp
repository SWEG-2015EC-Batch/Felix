//This Program Is used To Calculate A persons Body Mass Index and tell the users their condition of related to obesity 
#include <iostream>
using namespace std;
int main()
{   int counter = 0;
    cout << "Enter the number of individuals you want to calculate  BMI:  " ;
    cin >> counter;
    for(int i=0; i < counter; i++){   //to calculate BMI of needed individuals 
     
    cout <<"Enter person's " << i+1 <<" gender"<<endl;
    cout << "Enter M if the "<< i+1 << " person is male and F if she is a female:  " ;
    char  Gender ;
    cin >>  Gender ;
// To calculate for male or female separately
    if(Gender=='F'||Gender=='f'){
    cout << "Enter body weight in kilograms:  " ;
    double bodyWeight = 0;
    cin >> bodyWeight;
    cout << "Enter Height in meters:  ";
    double height = 0;
    cin >> height;
    double bmi = bodyWeight/(height*height);
         if(bmi < 18.5){
             cout << " your BMI is " << bmi <<" and you are Under weight. So you need to eat more."<< endl;
         }
         else if (bmi>=18.5 && bmi<25)
         {
             cout << " your BMI is " << bmi <<" and you are Normal weight. Keep it up."<< endl;
         }
         else if (bmi>=25 && bmi<29.9){
            cout << " your BMI is " << bmi <<" and you are Overweight, so try to decrease Your weight."<< endl;
         }
    else{
         cout << " your BMI is " << bmi <<" and you are Obesity. So you have to fix your diet and do cardio activities as soon as possible."<< endl;
    }
    }else if (Gender == 'M'||Gender == 'm'){
         cout << "Enter  body weight in kilograms:  " ;
    double bodyWeight = 0;
    cin >> bodyWeight;
    cout << "Enter Height in meters:  ";
    double height = 0;
    cin >> height;
    double bmi = bodyWeight/(height*height);
         if(bmi < 20.5){
             cout << " your BMI is " << bmi <<" and you are Under weight.  So you need to eat more."<< endl;
         }
         else if (bmi>=20.5 && bmi<26)
         {
             cout << " your BMI is " << bmi <<" and you are Normal weight. Keep it up."<< endl;
         }
         else if (bmi>=26 && bmi<30){
            cout << " your BMI is " << bmi <<" and you are Overweight, so try to decrease your weight."<< endl;
         }
    else{
         cout << " your BMI is " << bmi <<" and you are Obesity.  So you have to fix your diet and do cardio activities as soon as possible."<< endl;
                    }
               }
        }
   
    return 0;
}
