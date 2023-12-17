#include <iostream>
using namespace std;
int main(){
    float mark;
     cout<<"Enter the students mark out of 100: ";
    cin>>mark;
    
    if(mark >= 0 && mark <= 100){
        if(mark < 30){
            cout<<"result= "<< = "F";
        }
        else if(mark < 45){
           cout<<"result= " = "D";
        }
        else if(mark <55){
          cout<<"result= " = "C";
        }
        else if(mark < 60){
          cout<<"result= " = "C+";
        }
        else if(mark < 75){
          cout<<"result= " = "B";
        }
        else if(mark < 80){
          cout<<"result= " = "B+";
        }
        else if(mark < 90){
          cout<<"result= " = "A";
        }
        else{
          cout<<"result= " = "A+";
        }
        else{
        cout<<"Wrong input please enter a number between 0 and 100 inclusive";
    }
}
