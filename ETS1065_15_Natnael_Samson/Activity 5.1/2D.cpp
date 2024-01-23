#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int n;
    cout << "How much person do you have ( 1-100): ";
    cin>> n;
    double balance[100][3];
    double *ptrbalance = &balance[0][0];
    string name[100];
     for(int i=0;i<n;i++){
        cout<<"Full name of "<<i+1<<" th person : ";
        cin>>name[i];
        cout << "Enter weight of  "<<i+1<<" person : ";
        cin >> *(ptrbalance + 3*i);
        cout << "Enter heightof "<<i+1<<" person : ";
        cin >> *(ptrbalance + 3*i + 1);
        *(ptrbalance + 3*i + 2) = *(ptrbalance + 3*i) /(*(ptrbalance + 3*i + 1)**(ptrbalance + 3*i + 1));
    }
    cout<<" BMI in tabular form  :"<<endl;
    cout<<"Name"<<setw(15)<<"BMI"<<endl;
    for(int i=0;i<n;i++)
        {
        cout <<name[i]<<setw(15)<<*(ptrbalance + 3*i + 2)<<endl;
    }
  return 0;
}
