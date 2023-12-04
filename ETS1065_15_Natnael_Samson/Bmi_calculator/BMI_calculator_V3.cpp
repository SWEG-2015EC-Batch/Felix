//This Program Is used To Calculate A persons Body Mass Index
#include <iostream>
using namespace std;
int main () {
    cout << "\n                          BMI Calculator" << endl;
    cout << "====================================================================" << endl;
    char gender;
    double body_weight {0};
    double height {0};
    double BMI {0};//declaring and initializing body mass index
    int num_of_people; //counter 
    cout <<"Please enter the number of people you want to calculate BMI for: ";
    cin >> num_of_people;
    for (int i {0}; i < num_of_people; i++){
        cout << "\nPlease enter person " << i+1 <<"\'s weight: " ;
        cin >> body_weight;
        cout << "Please enter person " << i + 1 <<"\'s height: ";
        cin >> height;
        BMI = body_weight/(height*height);
        cout << "Enter M if you are a male and F if you are a female: ";
        cin >> gender;

        if (gender=='M' || 'm') {
            if (BMI < 20.5) {
                cout << "Your body mass index is " << BMI << " and you are underweight. You should eat more.\n" << endl;
            }else if(BMI > 20.5 && BMI < 26) {
                cout << "Your body mass index is " << BMI << " and you are normal weight. Good job.\n" << endl;
            }else if ( BMI >= 26 && BMI < 30) {
                cout << "Your body mass index is " << BMI << " and you are overweight. You should cut down in your calories.\n" << endl;
            }else {
                cout << "Your body mass index is " << BMI << " and you are obess. You should improve your diet.\n" << endl;
            }
        }else if (gender=='F' || 'f') {
            if (BMI < 18.5) {
                cout << "Your body mass index  is " << BMI << " and you are underweight. You should eat more.\n" << endl;
            }else if (BMI >= 18.5 && BMI < 25 ) {
                cout << "Your body mass index is " << BMI << " and you are normal weight. good job\n" << endl;
            }else if (BMI >= 25 && BMI < 30) {
                cout << "Your body mass index is " << BMI << " and you are overweight. You should cut down in your calories.\n" << endl;
            }else{
                cout << "Your body mass index is " << BMI << " and you are obess. You should improve your diet.\n" << endl;
            }
        }

    }
    cout << "Thank you for using this Program." << endl;
    return 0;
}
