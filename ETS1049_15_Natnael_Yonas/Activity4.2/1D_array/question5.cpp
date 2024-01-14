# include <iostream>
using namespace std;
int main(){
    int num {0};
    cout <<"Enter the number of students you wants to work with: ";
    cin >> num;
    double studentsMark[num] ;
    for(int i=1; i<num + 1; i++){
        cout <<"Enter student "<<i<<" mark: ";
        cin >> studentsMark[i];
    }
    cout<<"\n\nStudent ID "<<"\tResult"<<"\tScore Stutus level"<<endl;
    for(int i=1; i<num + 1; i++){
        if(studentsMark[i]>=80){
             cout <<"student " <<i<<"\t"<<studentsMark[i]<<"\t\t"<<"Excellent"<<endl;
        } else if(studentsMark[i]>=60 && studentsMark[i]<80){
            cout <<"student " <<i<<"\t"<<studentsMark[i]<<"\t\t"<<"Good"<<endl;
        } else if(studentsMark[i]>=50 && studentsMark[i]<60){
            cout <<"student " <<i<<"\t"<<studentsMark[i]<<"\t\t"<<"Fair"<<endl;
        }else if(studentsMark[i]>=40 && studentsMark[i]<50){
            cout <<"student " <<i<<"\t"<<studentsMark[i]<<"\t\t"<<"Poor"<<endl;
        }else{
            cout <<"student " <<i<<"\t"<<studentsMark[i]<<"\t\t"<<"Fail"<<endl;
        }
    }
return 0;
}
