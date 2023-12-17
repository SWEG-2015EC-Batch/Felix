//this program tells whether a given number is perfect or not
#include <iostream>
using namespace std;
int main ()
{
    int sum = 0,n;
    cout << "enter the number: ";
    cin>>n;
    for (int i = 1; i < n; i++)
    {
        if (n%i == 0)
        {
            sum += i;
        }
        
    }
    
if (n == sum)
{
    cout << "the number is perfect number";
}
else{
    cout<< "it is not"<<endl;
}
return 0;
}
