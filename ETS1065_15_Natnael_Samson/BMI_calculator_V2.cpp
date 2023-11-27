//This Program Is used To Calculate A persons Body Mass Index
//Version 2.0
#include <iostream>
using namespace std;
int main () {
    cout << "      BMI Calculator      " << endl;
    cout << "===========================" << endl;
    char gender;
    double body_weight {0};
    double height {0};
    double BMI {0};//declaring and initializing body mass index
    cout << "Please enter your weight in kilograms: ";
    cin >> body_weight;
    cout << "Please enter your height in meters: ";
    cin >> height;
    BMI = body_weight/(height*height);
    cout << "Enter M if you are a male and F if you are a female: ";
    cin >> gender;

    if (gender=='M' || 'm') {
        if (BMI < 20.5) {
            cout << "Your body mass index is " << BMI << " and you are underweight. You should eat more." << endl;
        }else if(BMI > 20.5 && BMI < 26) {
            cout << "Your body mass index is " << BMI << " and you are normal weight. Good job." << endl;
        }else if ( BMI >= 26 && BMI < 30) {
            cout << "Your body mass index is " << BMI << " and you are overweight. You should cut down in your calories." << endl;
        }else {
            cout << "Your body mass index is " << BMI << " and you are obess. You should improve your diet." << endl;
        }
    }else if (gender=='F' || 'f') {
        if (BMI < 18.5) {
            cout << "Your body mass index  is " << BMI << " and you are underweight. You should eat more." << endl;
        }else if (BMI >= 18.5 && BMI < 25 ) {
            cout << "Your body mass index is " << BMI << " and you are normal weight. good job" << endl;
        }else if (BMI >= 25 && BMI < 30) {
            cout << "Your body mass index is " << BMI << " and you are overweight. You should cut down in your calories." << endl;
        }else{
            cout << "Your body mass index is " << BMI << " and you are obess. You should improve your diet." << endl;
        }
    }

    return 0;
}
