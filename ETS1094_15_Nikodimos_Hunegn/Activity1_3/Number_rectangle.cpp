#include <iostream>

using namespace std;

int main()
{
    int row, col, start;
    cout<<"Enter the starting number: ";
    cin>>start;
    cout<<"Enter the row: ";
    cin>>row;
    cout<<"Enter the column: ";
    cin>>col;

    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            cout<<start<<" ";
            start++;
        }
        cout<<endl;
    }
    

}
