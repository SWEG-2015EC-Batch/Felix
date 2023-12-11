#include <iostream>
#include <cstring>

using namespace std;

int main(){
    float mark, test, quiz, project, assignment, final;
    string result;
    
    cout<<"Enter the students test(15%), Quiz(5%), Project(20%), Assignment(10%), and Final(50%) space separated: ";
    cin>>test>>quiz>>project>>assignment>>final;
    
    mark = test + quiz + project + assignment + final;
    
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
        cout<<"Your total mark is "<<mark<<" and the corresponding grade to your mark is "<<result;
    }
    else{
        cout<<"Total marks should be between the range of 0 and 100 please check your inputs again";
    }
}
