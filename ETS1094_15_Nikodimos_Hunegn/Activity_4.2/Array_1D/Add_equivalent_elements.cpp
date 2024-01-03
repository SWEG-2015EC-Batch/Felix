#include <iostream>

using namespace std;

int main(){
    int n;

    cout<<"Enter the number of elements of the sets: ";
    cin>>n;

    int first[n] = {};
    int second[n] = {};
    int equivalent_sum[n] = {};

    cout<<"Enter the elements of set 1 space separated: ";
    for(int i = 0; i < n; i++){
        cin>>first[i];
    }

    cout<<"Enter the elements of set 2 space separated: ";
    for(int j = 0; j < n; j++){
        cin>>second[j];

        equivalent_sum[j] = first[j] + second[j];
    }
    cout<<"------------------\n";
    cout<<"  Index\t |  Sum\n";
    for(int i = 0; i < n; i++){
        cout<<"------------------\n";
        cout<<"  "<<i<<"\t |  "<<equivalent_sum[i]<<endl;
    }
    cout<<"------------------\n";
}