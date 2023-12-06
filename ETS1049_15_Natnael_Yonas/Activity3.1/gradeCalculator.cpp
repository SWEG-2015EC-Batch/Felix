#include<iostream>
using namespace std;
int main(){
    cout << "===================================Grdae Calculator================================"<<endl;
    int num=0;
    int test=0;
    int quiz = 0;
    int project= 0;
    int assignment= 0;
    int final_exam= 0;
test:
    cout<<"Enter your  test mark(15%):";
    cin>>test;
    if( test>15 || test<0){
        cout<<"invalid input please enter valid input.\n";
goto test;
                          }
quiz:
    cout<<"Enter your  quiz mark(5%):";
    cin>>quiz;
    if(quiz>5||quiz<0){
        cout<<"invalid input please enter valid input.\n";
goto quiz;
                      }
project:
    cout<<"Enter your  project mark(20%):";
    cin>>project;
    if(project>20||project<0){
        cout<<"invalid input please enter valid input.\n";
goto project;
                            }
assignment:
    cout<<"Enter your  assignment mark(10%):";
    cin>>assignment;
    if(assignment>10 || assignment<0){
        cout<<"invalid input please enter valid input.\n";
goto assignment;
                                    }
final_exam:
    cout<<"Enter your  final exam mark(50%):";
    cin>>final_exam;
    if(final_exam>50 || final_exam<0){
        cout<<"invalid input please enter valid input.\n";
goto final_exam ;
                                     }
    num = test + final_exam + quiz + project + assignment ;
    cout<<"your result is: "<< num << " and your grade is: ";
    if(num>=90){
    cout<<"A+"<<endl;
    }else if (num>=80&&num<90){
        cout<<"A"<<endl;
        }else if (num>=75&&num<80){
            cout<<"B+"<<endl;
            }else if (num>=60&&num<75){
                cout<<"B"<<endl;
                }else if (num>=55&&num<60){
                    cout<<"C+"<<endl;
                    }else if (num>=45&&num<55){
                        cout<<"C"<<endl;
                        }else if (num>=30&&num<45){
                            cout<<"D"<<endl;
                            }else{
                                cout<<"F"<<endl;
                                }
    cout << "==================================================================================="<<endl;

    return 0;
}
