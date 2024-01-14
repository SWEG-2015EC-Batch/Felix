#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char pass[] = {"Nikodimos Hunegn"};
    string str = "";

    cout<<"Enter password: ";
    getline(cin, str);

    if(pass == str){
        cout<<"Correct";
    }
    else{
        cout<<"Incorrect";
    }
}