#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    char pass[] = {"NatiYoni@11 programing"};
    string str = "";

    cout<<"Enter password: ";
    getline(cin, str);

    if(pass == str){
        cout<<"Correct";
    }
    else{
        cout<<"Incorrect";
    }
  return 0;
}
