# include <iostream>
using namespace std;
int main(){
    int row = 0;
    cout<<"Enter the number of students you wants to deal with: ";
    cin>>row;
    int examScores[row][6];
    for(int i=1; i<row +1; i++){
            cout<<"Enter student"<<i<<" test Score: ";
            cin>>examScores[i][1];
            cout<<"Enter student"<<i<<" assignment Score: ";
            cin>>examScores[i][2];
            cout<<"Enter student"<<i<<" quiz Score: ";
            cin>>examScores[i][3];
            cout<<"Enter student"<<i<<" porject Score: ";
            cin>>examScores[i][4];
            cout<<"Enter student"<<i<<" Final exam Score: ";
            cin>>examScores[i][5];
    }
    cout<<"Students ID\t"<<"Test\t"<<"Assignment\t"<<"Quiz\t\t"<<"Project\t\t"<<"Final Exam\t"<<"Total\t\t"<<"Score status level"<<endl;
    for(int i=1; i<row+1; i++){
        for(int j=1; j<6;j++){
            examScores[i][6] = examScores[i][1] +  examScores[i][2]+ examScores[i][3] + examScores[i][4] + examScores[i][5] ;
        }
    }  
    for(int i=1; i<row+1; i++){
        cout<<"student"<<i<<"\t"<<examScores[i][1]<<"\t"<<examScores[i][2]<<"\t\t"<<examScores[i][3]<<"\t\t"<<examScores[i][4]<<"\t\t"<<examScores[i][5]<<"\t\t"<< examScores[i][6]<<"\t\t";
        if(examScores[i][6] >=80){
            cout<<"\tExellent"<<endl;
        }else if(examScores[i][6]>=60){
             cout<<"\tVery Good"<<endl;
        }else if(examScores[i][6]>= 50){
             cout<<"\tFair"<<endl;
       }else if(examScores[i][6]>=40){
             cout<<"\tpoor"<<endl;
       }else if(examScores[i][6]<40){
             cout<<"\tFail"<<endl;
       }
        }

    return 0;
}
