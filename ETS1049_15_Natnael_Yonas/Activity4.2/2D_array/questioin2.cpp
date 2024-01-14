# include <iostream>
using namespace std;
int main(){
    int row{0};
    int col{0};
    cout<<"Enter Rows: ";
    cin>>row;
    cout<<"Enter Columns: ";
    cin>>col;
    int nums[row][col];
    for(int i = 1; i < row+1; i++){
        for(int j = 1; j <col+1; j++){
           cout<<"Enter row"<<i<<" and column"<<j<<" of your list: ";
           cin>>nums[i][j];   
        }      
    }
    for(int i = 1; i < row+1; i++){
        int multiple = 1;
        int sum = 0;
        for(int j = 1; j < col+1; j++){
             sum +=   nums[j][i];
             multiple *=   nums[i][j];
        }
       cout<<"\nThe multiplications of row"<<i<<" is: "<<multiple<<endl;
       cout<<"The sum of column"<<i<<" is: "<<sum<<endl;
    }
    
    return 0;
}
