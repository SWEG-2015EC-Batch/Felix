# include <iostream>
using namespace std;
int main(){
    int num = 0;
    cout<<"Enter the amount of numbers for your first and second list: ";
    cin>>num;
    int array1[num];
    int array2[num];
    for(int i=1 ; i<num + 1 ; i++){
        cout<<"Enter num"<<i<<" of your first list: ";
        cin>>array1[i];
    }
    for(int i=1 ; i<num + 1 ; i++){
        cout<<"Enter num"<<i<<" of your second list: ";
        cin>>array2[i];
    }
       
     for(int i = 1; i<num + 1; i++){
        
            if( array1[i]!=array2[i]){
                cout<<"The arrays are not Identical to each other."<<endl;
                break;
            }
            if(i==num){
                cout<<"The arrays are Identical to each other."<<endl;
            }
        }
    return 0;
}
