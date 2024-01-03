#include <iostream>

using namespace std;

int main(){
    int n;
    
    cout<<"Enter the number of students: ";
    cin>>n;

    int student_mark[n] = {};
    char status[][10] = {"Excellent","Very Good" ,"Fair", "Poor", "Fail"};

    cout<<"Enter the marks of the students space separated: ";
    for(int i = 0; i < n; i++){
        cin>>student_mark[i];
    }

    cout<<"\n\n---------------------------------------------------\n";
    cout<<"  Student\t |  Mark\t |  Status\n";
    
    for(int i = 0; i < n; i++){
        int stat;
        if(student_mark[i] >= 80){
            stat = 0;
        }
        else if(student_mark[i] >= 60){
            stat = 1;
        }
        else if(student_mark[i] >= 50){
            stat = 2;
        }
        else if(student_mark[i] >= 40){
            stat = 3;
        }
        else{
            stat = 4;
        }
        cout<<"---------------------------------------------------\n";
        cout<<"  "<<i + 1<<"\t\t |  "<<student_mark[i]<<"\t\t |  "<<status[stat]<<endl;
    }
    cout<<"---------------------------------------------------\n";
}