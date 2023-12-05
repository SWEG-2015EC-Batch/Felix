//this is basic calculator that operate the basic arthimethic operations
#include <iostream>
using namespace std;
int main ()
{
    double num1,num2,insert;
    char Op;
    do
    {
    cout << "Enter the operation:"<<endl;
    cout << "----------------------------------------"<<endl;
    cin>> num1>>Op>>num2;
    switch (Op)
    {
    case '+':
          cout <<"result = "<< num1 + num2<<endl;
        break;
    case '-':
        cout <<"result = "<< num1 - num2<<endl;
        break;
    case '/':
        if (num2 != 0)
        {
          cout <<"result = "<<num1 / num2<<endl;
        }
        else{
            cout <<"error"<<endl;
        }
         break;
    case '*':
         cout <<"result = "<< num1 * num2<<endl;
         break;
    case '%':
          cout <<"result = "<<static_cast<long>(num1) % static_cast<long>(num2)<<endl;
          break;
    default:
        cout <<"you insert the wrong operator"<<endl;
        break;

    }
    cout << "----------------------------------------"<<endl;
    cout << "Enter any number other than 0 to continue:- ";
    cin>>insert;
    ;
    } while (insert != 0);
    return 0;
}
