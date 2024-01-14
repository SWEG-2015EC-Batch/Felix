# include <iostream>
using namespace std;

int main(){
    int array[3][4];
    int sum = 0;
    for(int i=1; i<4;i++){
        for(int j=1;j<5;j++){
            cout<<"Enter the number of row "<<i<<" and column "<<j<<" : ";
            cin>>array[i][j];
        }
    }
    for(int i=1; i<4;i++){
        for(int j=1;j<5;j++){
            if(array[i][j] % 2 ==0){ 
            cout<< array[i][j]<<"\t";
            }else{
             cout<<"*\t";
            }
        }       
        cout<<endl;
    }
    for(int i=1; i<4;i++){
        for(int j=1;j<5;j++){
            if(array[i][j] % 2 ==0){ 
            sum += array[i][j];
            }
        }
    }
    cout<<"the sum of even array elements is: "<<sum<<endl;
    return 0;
}
