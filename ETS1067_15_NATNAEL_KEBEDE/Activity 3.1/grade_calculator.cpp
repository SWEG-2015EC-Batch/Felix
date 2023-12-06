//this program tells your grade based on your total mark
#include <iostream>
using namespace std;
int main ()
{
    double test,final,quiz,assignment,project;
    cout<<"test: ";
    cin>>test;
    cout<<"final: ";
    cin>>final; 
    cout<<"quiz: ";
    cin>>quiz; 
    cout<<"assignment: ";
    cin>>assignment;
    cout<<"project: ";
    cin>>project;
    
    
    if (test<=15 && final<=50 && quiz<=5 && assignment<=10 && project<=20)
    {
        double result = test + final + quiz + assignment + project;
       if (result >= 90 )
       {
        cout <<"A+"<<endl;
       }
       else if (result >= 80 && result <=90)
       {
        cout <<"A"<<endl;
       }
       else if (result >= 75 && result <=80)
       {
        cout <<"B+"<<endl;
       }
       else if (result >= 60 && result <=75)
       {
        cout <<"B"<<endl;
       }
       else if (result >= 55 && result <=60)
       {
        cout <<"C+"<<endl;
       }
        else if (result >= 45 && result <=55)
       {
        cout <<"C"<<endl;
       }
       else if (result >= 30 && result <=45)
       {
        cout <<"D"<<endl;
       }
       else{
        cout <<"F"<<endl;
       }
    }
    else{
        cout << "wrong input"<<endl;
    }
    
    return 0;
}
