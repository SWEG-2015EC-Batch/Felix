#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int n;
    cout<<"How many names do you have: ";
    cin>>n;

    string names[n];

    cout<<"Enter the names: ";
    for(int i = 0; i < n; i++){
        cin>>names[i];
    }

    sort(names, names + n);

    cout<<"The names in alphabetic order are: \n";
    for(int i = 0; i < n ; i++){
        cout<<i + 1<<". "<<names[i]<<endl;
    }

    return 0;
}