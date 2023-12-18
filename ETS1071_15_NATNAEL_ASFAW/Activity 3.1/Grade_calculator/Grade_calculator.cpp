#include<iostream>
using namespace std;

int main(){
 int num,test,quiz,project,assignment,final_exam,i,n;
 cout<<"Enter number of students:";
 cin>>n;
 for(i=1;i<=n;i++){
        cout<<"\nPerson-"<<i<<endl;
test:
    cout<<"Enter your  test mark(15%):";
    cin>>test;
    if(test>15||test<0){
    cout<<"invalid\n";
    goto test;}
quiz:
    cout<<"Enter your  quiz mark(5%):";
    cin>>quiz;
    if(quiz>5||quiz<0){
    cout<<"invalid\n";
    goto quiz;}
project:
    cout<<"Enter your  project mark(20%):";
    cin>>project;
    if(project>20||project<0){
    cout<<"invalid\n";
    goto project;}
    cout<<"Enter your  assignment mark(10%):";
    cin>>assignment;
assignment:
if(assignment>10||assignment<0){
    cout<<"invalid\n";
    goto assignment;}
final_exam:
    cout<<"Enter your  final exam mark(50%):";
    cin>>final_exam;
    if(final_exam>50||final_exam<0){
    cout<<"invalid\n";
    goto final_exam ;}

if(num<=100&&num>=0){
num=test+quiz+project+assignment+final_exam;
}
 if (num <= 100 && num >= 0) {
        cout << "Total Marks: " << num << endl;
if(num>=90){
    cout<<"A+";
}else if (num>=80&&num<90){
cout<<"A";
}else if (num>=75&&num<80){
cout<<"B+";
}else if (num>=60&&num<75){
cout<<"B";
}else if (num>=55&&num<60){
cout<<"C+";
}else if (num>=45&&num<55){
cout<<"C";
}else if (num>=30&&num<45){
cout<<"D";
}else if (num<30&&num>0){
cout<<"F";
}else{
cout<<"Invalid Mark";
}}else {
        cout << "Invalid Total Marks!";
    }}
return 0;
}

