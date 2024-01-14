#include <iostream>
#include <math.h>

using namespace std;

int main(){
    
    double voltage[] = {11.95, 16.32, 12.15, 8.22, 15.98, 26.22, 13.54, 6.45, 17.59};
    int n = sizeof(voltage) / sizeof(voltage[0]);
    cout<<" ------- ------- -------\n"; 
    for(int i = 0; i < n; i++){
        cout<<"| "<<voltage[i]<<"\t";
        if(i % 3 == 2){
            cout<<"\n ------- ------- -------\n";
        }
    }
}