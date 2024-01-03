#include <iostream>

using namespace std;

int main(){

    int n = 10, k = 0;
    int temp[n] = {};
    int evennum[n] = {};

    for(int i = 0; i < n; i++){
        cout<<"Enter number: ";
        cin>>temp[i];
    }

    for(int j = 0; j < n; j++){
        if(temp[j] % 2 == 0){
            evennum[k] = temp[j];
            k++;
        }
    }
    if(k > 0){
        cout<<"Even numbers: ";
        for(int a = k - 1; a >= 0; a--){
            cout<<evennum[a]<<", ";
        }
    }
    else{
        cout<<"No even numbers";
    }

}