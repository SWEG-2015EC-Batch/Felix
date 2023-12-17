#include <iostream>

using namespace std;

int main()
{
    int i,j, row;

    cout<<"Enter the number of rows: ";
    cin>>row;
    
    for(i = row; i >= 0; i--){
        for(j = 0; j <= i; j++){
            if(i == row || j == 0){
                cout<<"* ";
            }
            else{
                if(i == j){
                    cout<<"* ";
                }
                else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }
}
