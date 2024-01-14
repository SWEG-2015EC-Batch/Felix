#include <iostream>
using namespace std;
int main(){
    cout<<"================================================================================================================================"<<endl;
    const int num = {8};
    double sum {0};
    double temp[num];
    cout<<"Enter Your inputs to the program"<<endl;
    for(int i = 1 ; i < num + 1 ; i++){
        cout<<"Enter num "<<i<<" : ";
        cin>>temp[i];
        sum  = sum + temp[i];

    }

    double average = sum/num;
    cout<<"\n\nThe numbers are: "<<endl;
     for(int i = 1 ; i < num + 1 ; i++){
        cout<<"num "<<i<<" "<<temp[i]<<"\t "<<endl;
     }

     cout<<"\nThe average is: "<<average<<endl;
     cout<<"================================================================================================================================"<<endl;
     return 0;
}
