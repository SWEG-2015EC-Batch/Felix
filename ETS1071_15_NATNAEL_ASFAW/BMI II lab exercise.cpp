#include <iostream>
#include <cmath>
using namespace std;

int main(){
   // Declare variable for weight and height
   double weight,height,bmi,i,n;
   char gender;

cout <<"Enter the number of people:";
   cin >>n;


  for(i=0;i<n;i++)
    {
        //Prompt the user to enter their weight in kilograms
  cout <<"Person "<<i+1<<endl;
   cout <<"Enter your weight in kilograms:";
   cin >> weight;

   //Prompt the user to enter their height in centimeters
   cout <<"Enter your height in meters:";
   cin >> height;

   //Calculate the BMI by dividing the weight in kilograms by the height in meters squared
      bmi = weight / pow(height,2);

   // Identify the gender of an individual
  cout<<"Enter your gender:";
  cin>>gender;

        if(gender=='M'){
   cout <<"Male"<<endl;

   }else {if(gender=='F')
   cout <<"Female"<<endl;
   }
if(gender=='M')
    {
   if(bmi<18.5){
    cout <<"Under-Weight"<<endl;
   }else if(bmi>=18.5&&bmi<=24.9){
    cout <<"Normal-Weight"<<endl;
   }else if(bmi>=25&&bmi<30){
   cout <<"Over-Weight"<<endl;
   }else{
    cout <<"Obesity";
   }}
   else if(gender=='F')
    {
   if(bmi<20.5){
    cout <<"Under-Weight";
   }else if(bmi>=20.5&&bmi<=25.9){
    cout <<"Normal-Weight"<<endl;
   }else if(bmi>=26&&bmi<30){
   cout <<"Over-Weight"<<endl;
   }else{
    cout <<"Obesity"<<endl;
   }}

    // Print the calculated BMI
    cout << "Your BMI is:"<<bmi<<endl;}

    return 0;
}

