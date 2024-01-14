#include <iostream>

using namespace std;

int main()
{
    int nums[3][4] = {};

    for(int i = 0; i < 3; i++){
        cout<<"Enter elements of row "<<i + 1<<": ";
        for(int j = 0; j < 4; j++){
            cin>>nums[i][j];
        }
    }

    cout<<"\n ------- ------- ------- ------- ------- -----------\n";
    cout<<"|  R/C  |  R1\t|  R2\t|  R3\t|  R4\t|  Even sum\n";
    for(int i = 0; i < 3; i++){
        int sum = 0;
        cout<<" ------- ------- ------- ------- ------- -----------\n";
        cout<<"|   C"<<i + 1<<"  |";
        for(int j = 0; j < 4; j++){
            if(nums[i][j] % 2 == 0){
                cout<<"  "<<nums[i][j]<<"\t|";
                sum += nums[i][j];
            }
            else{
                cout<<"  *\t|";
            }
        }
        cout<<"    "<<sum;
        cout<<endl;
    }
    cout<<" ------- ------- ------- ------- ------- -----------\n";
}