# include <iostream>
using namespace std;
int main(){
    int num {0};
    cout <<"Enter the amount of numbers you want to store:  ";
    cin >> num;
    int listOfNums[num];
    for(int i=1; i<num + 1; i++){
        cout <<"Enter num"<<i<<" : ";
        cin >>listOfNums[i];
    }
    cout<<"\n\nThe even numbers of your list in reverse format are: \n";
    for(int i=num; i>0 ; i--){
        if(listOfNums[i] % 2 == 0){
            cout <<listOfNums[i]<<",\t";
        }
    }
return 0;
}
