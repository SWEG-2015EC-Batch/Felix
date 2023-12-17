#include <iostream>

using namespace std;

int main()
{
    int i, j, row;
    
    cout<<"Enter the number of rows: ";
    cin>>row;

    for(i = 0; i < row; i++){
        for(j = 0; j <= i; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
