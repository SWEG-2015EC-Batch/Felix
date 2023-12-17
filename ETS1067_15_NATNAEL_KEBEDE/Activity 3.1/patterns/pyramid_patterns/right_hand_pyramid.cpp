#include <iostream>

using namespace std;

int main()
{
    int row;

    cout<<"Enter a number: ";
    cin>>row;

    for(int i = 1; i <= row; i++){
        for(int j = row; j >= 1 ; j--){
            if(j <= i){
                cout<<j<<" ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
