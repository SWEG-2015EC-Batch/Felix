#include <iostream>
#include <cstring>

using namespace std;

int main(){
    float mark;
    string result;
    
    cout<<"Enter the students mark out of 100: ";
    cin>>mark;
    
    if(mark >= 0 && mark <= 100){
        if(mark < 30){
            result = "F";
        }
        else if(mark < 45){
            result = "D";
        }
        else if(mark <55){
            result = "C";
        }
        else if(mark < 60){
            result = "C+";
        }
        else if(mark < 75){
            result = "B";
        }
        else if(mark < 80){
            result = "B+";
        }
        else if(mark < 90){
            result = "A";
        }
        else{
            result = "A+";
        }
        cout<<"The corresponding grade to your mark is "<<result;
    }
    else{
        cout<<"Wrong input please enter a number between 0 and 100 inclusive";
    }
}
